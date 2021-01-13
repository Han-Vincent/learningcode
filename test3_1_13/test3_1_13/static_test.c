#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d\n", i);
//
//
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//
//	//结果为1111111111
//
//
//
//
//	return 0;
//}




//void test()
//{
//	static int i = 0;		//i 是一个静态的局部变量 
//	i++;
//	printf("%d\n", i);
//
//
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//
//	//结果为12345678910
//
//
//
//
//	return 0;
//}
int main()
{
	extern int global_val;
	//extern int global_val=2; //错误 error C2205: “global_val”: 不能对带有块范围的外部变量进行初始化	
	//extern-用于声明外部符号

	printf("%d\n", global_val);

	return 0;
}