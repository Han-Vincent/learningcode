#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void selfadd(int* pa)
{
	(*pa)++;

}
int main()
{
	int x = 1;
	selfadd(&x);
	printf("%d\n", x);


	return 0;
}





//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//
//
//	return 0;
//}
