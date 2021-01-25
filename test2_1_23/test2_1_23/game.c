#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (j ==col - 1)
				printf(" %c \n", board[i][j]);
			else
				printf(" %c |", board[i][j]);			
		}

		if (i != row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				if (j == col - 1)
					printf("---\n");
				else
					printf("---|");
			}
		}
	}	
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家输入要下棋的位置坐标（如3，2）\n\n");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("输入坐标无效\n\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = rand() % row;
	int y = rand() % col;
	printf("电脑下棋\n\n");
	while (1)
	{
		if (board[ x ][ y ] == ' ')
		{
			board[ x ][ y ] = '#';
			break;
		}		
	}
}

int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{			
			if (board[i][j] == ' ');
			{
				return 0;
			}
		}
	}
	return 1;
}

char result(char board[ROW][COL], int row, int col)
{





}
	





/*


   |   |
---|---|---
   |   |
---|---|---
   |   |


*/
