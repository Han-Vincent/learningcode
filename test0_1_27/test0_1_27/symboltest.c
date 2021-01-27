#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////有关 算术操作符
//
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n",a);
//
//	int b = 5.0/ 2;
//	printf("%d\n", b);
//
//	double c = 5.0 / 2.0;
//	printf("%lf\n", c);
//	//注意浮点数的打印 %lf
//
//
//	return 0;
//}










////编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//
//int main()
//{
//	int x = 11;
//	//00000000 00000000 00001011
//	//00000000 00000000 00000001
//	int a = 1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((x >> i)&a == 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}












////不能创建临时变量（第三个变量），实现两个数的交换
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("begain a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after exchange a=%d,b=%d\n", a, b);
//	return 0;
//}