#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//整个游戏算法的实现

void game()
{
	int ret = 0;
	//数组-存放棋盘信息
	char chess[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(chess, ROW, COL);
	//打印棋盘
	DisplayBoard(chess, ROW, COL);
	
	//玩家下棋
	PlayerMove(chess,ROW,COL);
	//打印棋盘
	DisplayBoard(chess, ROW, COL);
	//电脑下棋
	ComputerMove(chess, ROW, COL);

	DisplayBoard(chess, ROW, COL);

	ret = isFull(chess, ROW, COL);
	



	



}



void menu()
{
	printf("---------------------\n");
	printf("---1.play---0.exit---\n");
	printf("---------------------\n");
}

void test()
{
	srand((unsigned int)time(NULL));
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
}

int main()
{
	test();
	return 0;
}

