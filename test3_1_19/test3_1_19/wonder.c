#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void game()
{
	srand((unsigned)time(NULL));
	int a = rand()%100+1;
	int i = 0;
	
	for (i = 0; i < 7; i++)
	{
		int guess = 0;
		printf("��������µ���:\n");
		scanf("%d", &guess);

		if (guess > a)
		{
			printf("����,�㻹��%d�λ���\n", 6- i);
		}
		else if (guess < a)
		{
			printf("С�ˣ��㻹��%d�λ���\n", 6- i);
		}
		else
		{
			printf("�¶���!\n");
			break;
		}

	}

}
void menu()

{
	printf("-------------------------------\n");
	printf("---- 1.paly ------ 0.exit -----\n");
	printf("-------------------------------\n");

}


/* ����������ķ���

rand() ���������һ��λ�� 0 ~ RAND_MAX ֮���������

RAND_MAX �� <stdlib.h> ͷ�ļ��е�һ���꣬������ָ�� rand() ���ܷ��ص�����������ֵ��
C���Ա�׼��û�й涨 RAND_MAX �ľ�����ֵ��ֻ�ǹ涨����ֵ����Ϊ 32767��
��ʵ�ʱ���У�����Ҳ����Ҫ֪�� RAND_MAX �ľ���ֵ����������һ���ܴ�������Դ����ɡ�

rand() �����������������α��������Ǹ���һ����ֵ����ĳ����ʽ��������ģ������ֵ���ǳ�֮Ϊ�����ӡ���


���ǿ���ͨ�� srand() ���������¡����֡����������Ӿͻᷢ���ı䡣��������������ӣ�Ĭ������Ϊ1��ÿ�����в�����ͬ���������
srand() ���÷�Ϊ��

void srand (unsigned int seed);

����Ҫһ�� unsigned int ���͵Ĳ�����
��ʵ�ʿ����У����ǿ�����ʱ����Ϊ������ֻҪÿ�β��ֵ�ʱ�䲻ͬ����ô���ɵ����ӾͲ�ͬ�����յ������Ҳ�Ͳ�ͬ��

ʹ�� <time.h> ͷ�ļ��е� time() �������ɵõ���ǰ��ʱ�䣨��ȷ���룩����������������

srand((unsigned)time(NULL));


*/




int main()
{
	
	int choice = 0;
	do
	{

		menu();
		printf("���������ѡ��");
		scanf("%d", &choice);
		switch (choice)
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
	} while (choice);	//ע�� ; 
		

	return 0;
}