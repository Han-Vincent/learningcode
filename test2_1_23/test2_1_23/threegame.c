#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������Ϸ�㷨��ʵ��

void game()
{
	int ret = 0;
	//����-���������Ϣ
	char chess[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(chess, ROW, COL);
	//��ӡ����
	DisplayBoard(chess, ROW, COL);
	
	//�������
	PlayerMove(chess,ROW,COL);
	//��ӡ����
	DisplayBoard(chess, ROW, COL);
	//��������
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
		printf("���������ѡ��:\n");
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
			printf("�������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

