#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{

	char show_board[ROWS][COLS] = { 0 };	//չʾ���û�������
	char secret_board[ROWS][COLS] = { 0 };	//͸�Ӱ�ȫ����

	//��ʼ������
	Initboard(show_board, ROWS, COLS, '*');
	Initboard(secret_board, ROWS, COLS, '0');
	//��ӡ����
	Desplayboard(show_board, ROW, COL);
	Desplayboard(secret_board, ROW, COL);
	//����
	makebooms(secret_board, ROW, COL, BOOMS);
	Desplayboard(secret_board, ROW, COL);

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
	menu();
	int input = 0;
	do{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
	
}


int main()
{
	test();


	return 0;
}