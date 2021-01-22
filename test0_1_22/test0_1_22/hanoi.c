#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//汉诺塔问题 （当有n个圆盘时，把最上面n-1个看作一个整体；如有3个圆盘，把最上面两个看作一个整体，再分开来看）

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c -> %c \n", x, z);

	}
	else
	{
		hanoi(n - 1, x,z,y);
		printf("%c -> %c \n", x, z);
		hanoi(n - 1, y, x, z);	
	}
}


int main()
{	
	hanoi(3,'A','B','C');
	return 0;
}