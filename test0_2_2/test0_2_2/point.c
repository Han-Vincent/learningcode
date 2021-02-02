#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////野指针问题
////1.指针未初始化
//int main()
//{
//	int i;//局部变量未被初始化，默认随机值
//	int* p;//局部变量未被初始化，默认为随机值
//	*p = 20;
//	//报错
//	return 0;
//}
//
////指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}
//
////3.指针指向的空间已经释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();//warning C4172: 返回局部变量或临时变量的地址
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//调试查看内存变化
//		*(p++) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//	//调试查看内存变化
//	return 0;
//}