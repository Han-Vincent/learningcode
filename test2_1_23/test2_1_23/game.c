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

void PlayerMove(char board, int row, int col)
{






	
}




/*


   |   |
---|---|---
   |   |
---|---|---
   |   |


*/
