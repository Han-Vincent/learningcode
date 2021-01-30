#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//int a = 1;
	//int b = 0;

	///*if (a > 5)
	//	b = 3;
	//else
	//	b = -3;*/

	////转换为条件表达式为：
	//b= (a > 5 ? 3 : -3);

	////使用条件表达式实现找两个数中较大值。
	//int max = (a > b ? a : b);




	//逗号表达式
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	//逗号表达式，就是用逗号隔开的多个表达式。
	//逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果。
	printf("%d\n", c);//13


	return 0;
}






//int main()
//{
//	short s = 0;
//	int a = 11;
//	printf("%d\n", sizeof(s = a+5));//2
//	printf("%d\n", s);//0
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = {0};
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	return 0;
//}