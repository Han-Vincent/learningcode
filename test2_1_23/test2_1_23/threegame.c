
#include "game.h"

//������Ϸ�㷨��ʵ��

void game()
{
	//����-���������Ϣ
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


	return 0;
}

