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

void makebooms(char board[ROWS][COLS], int row, int col, int booms)
{
	int x = 0;
	int y = 0;
	int i = 0;
	for (i = 0; i < booms; i++)
	{	
		 x = rand() % 9 + 1;
		 y = rand() % 9 + 1;
			board[x][y] = '1';
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