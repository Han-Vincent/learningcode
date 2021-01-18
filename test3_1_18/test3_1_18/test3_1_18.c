#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输出1到100含9的个数
//9 19 29 39 49 59 69 79 89 
//90 91 92 93 94 95 96 97 98 99
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; 1 < 100; i++)
	{
		if (i / 10 == 9)
		{
			printf("%d", i);
			count++;
		}
		if (i %10==9)
		{
			printf("%d", i);
			count++;
		}
		
	}
	printf("count=%d", count);

	return 0;
}

