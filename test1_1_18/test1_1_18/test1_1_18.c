#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//闰年的条件是：1.年份是4的倍数的，且不是100的倍数   2.必须是400的倍数
int main()
{
	int year = 0;
	printf("请输入年份：");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d年是闰年\n", year);

	}
	else
	{
		printf("%d年不是闰年\n", year);
	}



	return 0;
}