#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int Add(int x, int y)
{
	return x + y;

}

int Sub(int x, int y)
{
	return x - y;

}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &a, &b);

	printf("a+b=%d\na-b=%d\n", Add(a, b), Sub(a, b));

	return 0;
}


