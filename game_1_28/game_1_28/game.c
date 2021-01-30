#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
			board[i][j] = set;
	}
}

void Desplayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	printf("  ");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);

	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Makebooms(char board[ROWS][COLS], int row, int col, int booms)
{
	
	while(booms)
	{	
		 int x = rand() % 9 + 1;
		 int y = rand() % 9 + 1;
		 if (board[x][y] == '0')
		 {
			 board[x][y] = '1';
			 booms--;
		 }
	}
}
void  Findbooms(char secret[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int set = 0;
	int win = 0;


	while (win <row*col - BOOMS)
	{
		printf("请输入坐标进行扫雷(如3，2）\n");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col&&show[x][y] == '*')
		{
			if (secret[x][y] == '1')
			{
				printf("踩雷啦，游戏结束\n");
				Desplayboard(secret, ROW, COL);
				break;
			}
			else
			{
				set = secret[x - 1][y - 1] + secret[x - 1][y]
					+ secret[x - 1][y + 1] + secret[x][y - 1]
					+ secret[x][y + 1] + secret[x + 1][y - 1]
					+ secret[x + 1][y] + secret[x + 1][y + 1]-8*'0';
				show[x][y] = set+'0';
				Desplayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入坐标有误\n");
		}
	}
	
	if (win == row*col - BOOMS)
	{
		printf("排雷成功！\n");
		Desplayboard(secret, ROW, COL);
	}







}







/*

  1 2 3 4 5 6 7 8 9
1 * * * * * * * * *
2 * * * * * * * * *
3 * * * * * * * * *
4 * * * * * * * * *
5 * * * * * * * * *
6 * * * * * * * * *
7 * * * * * * * * *
8 * * * * * * * * *
9 * * * * * * * * *

*/