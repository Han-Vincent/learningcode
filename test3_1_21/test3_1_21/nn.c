#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//求n的阶乘。（不考虑溢出）


int Fac(n)
{	
	int a = 1;
	int b = 1;
	int c = 1;
	while(n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}

//1 1 2 3 5 8 
//a b c

int main()
{
	int i = 6;

	printf("%d\n", Fac(i));

	return 0;

}

