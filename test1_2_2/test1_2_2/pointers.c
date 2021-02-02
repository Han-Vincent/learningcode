#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//求字符串长度

////计数器方法
//int my_strlen(char* p)
//{ 
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}

////用指针计算字符串长度
//int my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//int main()
//{
//	char a[] = "qwe";
//	char* pa = &a;
//	int ret = my_strlen(pa);
//	printf("%d\n", ret);
//
//
//	return 0;
//}

int main()
{
	int a = 1;
	int* pa = &a;
	int** ppa = &pa;
	int*** pppa = &ppa;
	/*
	如何理解指针：

	int*    (* 指int)	int   * 
	int**	(* 指int*)	int*  *
	
	*/

	int b = 20;
	*ppa = &b;
	//等价于 pa = &b;

	**ppa = 30;
	//等价于*pa = 30;
	//等价于a = 30;

	//指针数组
	int* arr2[] = { &a, &b };

	return 0;
}