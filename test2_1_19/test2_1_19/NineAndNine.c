#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d=%-2d ", j, i, j*i);		//ʹ��printf��ʽ�����ʱ��ÿ�������ַ�����д��%nC����ʽ�����Ӧ���ǲ��㲿����ಹ�ո�ʵ���Ҷ���Ч����
													//��Ҫ�ڲ��㲿���Ҳಹ�ո�ֻ��Ҫ�ڿ���ַ�ǰ�� - ���ż���ʵ�������
		}

		printf("\n");

	}

	return 0;
}