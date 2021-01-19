#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//计算1/1-1/2+1/3-1/4......+1/99-1/100

int main()
{
	int i = 1;
	int j = 0;
	int flag = 1.0;

	//int sum = 0;
	double sum = 0.0;

	for (i = 1; i <= 100; i++)
	{
		//sum += flag * 1 / i;
		//printf("%d\n", 1/i);		1/i恒等于0

		//正确写法
		sum += flag * 1.0 / i;
		printf("%f\n", 1.0/i);
		flag = -flag;



	}
	printf("sum is %f\n", sum);		//注意浮点数的打印 %f


	return 0;
}