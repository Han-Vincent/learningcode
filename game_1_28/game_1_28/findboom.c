#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char ret =' ';
	char show_board[ROWS][COLS] = { 0 };	//展示给用户的棋盘
	char secret_board[ROWS][COLS] = { 0 };	//透视版全棋盘

	//初始化棋盘
	Initboard(show_board, ROWS, COLS, '*');
	Initboard(secret_board, ROWS, COLS, '0');
	//打印棋盘
	Desplayboard(show_board, ROW, COL);
	Desplayboard(secret_board, ROW, COL);
	//埋雷
	Makebooms(secret_board, ROW, COL, BOOMS);
	Desplayboard(secret_board, ROW, COL);
	//玩家扫雷
	 Findbooms(secret_board, show_board, ROW, COL);
		
	

}





void menu()
{
	printf("-----------------\n");
	printf("-----1.play------\n");
	printf("-----0.exit------\n");
	printf("-----------------\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
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
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	
}


int main()
{
	test();


	return 0;
}