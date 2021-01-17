#define _CRT_SECURE_NO_WARNINGS 1

//写代码将三个数从大到小输出
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("从大到小输出为:%d %d %d", a, b, c);
//		}
//		else
//		{
//			if (a > c)
//			{
//				printf("从大到小输出为:%d %d %d", a, c, b);
//			}
//			else
//			{
//				printf("从大到小输出为:%d %d %d", c, a, b);
//			}
//		}
//	}
//	else
//	{
//		if (a > c)
//		{
//			printf("从大到小输出为:%d %d %d", b,a,c);
//		}
//		else
//		{
//			if (b > c)
//			{
//				printf("从大到小输出为:%d %d %d", b, c,a);
//			}
//			else
//			{
//				printf("从大到小输出为:%d %d %d", c, b, a);
//			}
//		}
//
//
//	}
//
//
//
//
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	if (a<b){ t = a; a = b; b = t; }
	if (a<c){ t = a; a = c; c = t; }
	if (b<c){ t = b; b = c; c = t; }
	printf("%d %d %d\n", a, b, c);
	return 0;
}