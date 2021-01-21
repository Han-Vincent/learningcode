#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include "add.h"
int main()
{
	int a = 1;
	int b = 3;
	int sum = add(a, b);
	printf("%d\n", sum);

	return 0;
}