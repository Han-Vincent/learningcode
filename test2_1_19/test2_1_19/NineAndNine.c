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
			printf(" %d*%d=%-2d ", j, i, j*i);		//使用printf格式化输出时，每个控制字符可以写成%nC的形式，其对应的是不足部分左侧补空格，实现右对齐效果；
													//若要在不足部分右侧补空格，只需要在宽度字符前加 - 符号即可实现左对齐
		}

		printf("\n");

	}

	return 0;
}