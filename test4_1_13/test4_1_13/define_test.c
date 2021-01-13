#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define NUM 200		//define定义标识符常量

#define MAX(X,Y) (X>Y ? X:Y)	//define定义宏-带参数

int main()
{
	int a = 100;
	int b = NUM;
	printf("%d\n", b);
	int max = MAX(a,b);		//宏的方式求最大值
	printf("%d\n", max);



	return 0;
}