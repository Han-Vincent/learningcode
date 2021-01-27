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
		printf("���������Ҫ�����λ�����꣨��3��2��\n");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("����������Ч\n\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0; 
	int y = 0;
	printf("��������\n\n");
	while (1)
	{
		 x = rand() % row;
		 y = rand() % col;
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
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1]!= ' ')
		{
			return board[i][0];
		}
	}

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (1 == isFull(board, ROW, COL))
	{
		return '-';
	}
	
	return 'C';
}
	
/*

���Ӯ *
����Ӯ #
ƽ��   -
���� C


*
/





/*


   |   |
---|---|---
   |   |
---|---|---
   |   |


*/
