#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char ret =' ';
	char show_board[ROWS][COLS] = { 0 };	//չʾ���û�������
	char secret_board[ROWS][COLS] = { 0 };	//͸�Ӱ�ȫ����

	//��ʼ������
	Initboard(show_board, ROWS, COLS, '*');
	Initboard(secret_board, ROWS, COLS, '0');
	//��ӡ����
	Desplayboard(show_board, ROW, COL);
	Desplayboard(secret_board, ROW, COL);
	//����
	Makebooms(secret_board, ROW, COL, BOOMS);
	Desplayboard(secret_board, ROW, COL);
	//���ɨ��
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
			printf("�˳���Ϸ\n");
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