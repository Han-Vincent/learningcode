#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

//判断一个数是否为素数

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
	printf("请输入要进行判断的数：\n");
	scanf("%d", &a);
	
	if (is_prime(a) == -1)
	{
		printf("该数字为素数\n");
	}
	else
	{
		printf("该数字不是素数\n");
	}

	return 0;
}




////交换两个数的值（传址函数）
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
//	//传址调用
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}