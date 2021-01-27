#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������Ϸ�㷨��ʵ��

void game()
{
	char ret = 0;
	//����-���������Ϣ
	char chess[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(chess, ROW, COL);
	//��ӡ����
	DisplayBoard(chess, ROW, COL);
	
	while (1)
	{	
		//�������
		PlayerMove(chess, ROW, COL);
		//��ӡ����
		DisplayBoard(chess, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = result(chess, ROW, COL);
		
		if ('C' != ret)
		{
			break;
		}

		//��������
		ComputerMove(chess, ROW, COL);
		//��ӡ����
		DisplayBoard(chess, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = result(chess, ROW, COL);
		
		if ('C' != ret)
		{
			break;
		}

	}

	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == '-')
	{
		printf("ƽ��\n");
	}

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

