
#include "game.h"

//整个游戏算法的实现

void game()
{
	//数组-存放棋盘信息
	char board[ROW][COL];

	InitBoard(board[ROW][COL], ROW, COL);
	DisplayBoard(board[ROW][COL], ROW, COL);
	



}



void menu()
{
	printf("---------------------\n");
	printf("---1.play---0.exit---\n");
	printf("---------------------\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);


	return 0;
}

