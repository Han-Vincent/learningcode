#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

//�ж�һ�����Ƿ�Ϊ����

int is_prime(int n)
{
	int i = 2;
	for (i =2; i <= sqrt(n); i++)
	{
		if (n  %i == 0)
		{
			return 0;		
		}

	}
	return -1;
}

int main()
{
	int a = 0;
	printf("������Ҫ�����жϵ�����\n");
	scanf("%d", &a);
	
	if (is_prime(a) == -1)
	{
		printf("������Ϊ����\n");
	}
	else
	{
		printf("�����ֲ�������\n");
	}

	return 0;
}




////������������ֵ����ַ������
//
//void swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//	
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	//��ַ����
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}