#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//数组初始化

int main()
{

	//int arr0[] = { 1, 2, 3, 4 };
	//int arr1[3] = {1,2,3};
	//char arr2[5] = { 'a', 'b', 'c', 'd'};
	//char arr3[3] = { 'a', 98, 'c' };
	//char arr4[] = "abc";
	////printf("arr3: %s\n", arr3);
	////printf("arr4:%s\n", arr4);

	////printf("%d\n", sizeof(arr4));//4	计算arr4所占空间大小
	////printf("%d\n", strlen(arr4));//3	计算arr4字符串的长度即'\0'之前的字符个数

	///*	strlen和sizeof没有关联
	//	strlen是求字符串长度的 只能针对字符串求长度    -库函数 string.h
	//	sizeof 计算变量、数组、类型的大小  单位是字节  -操作符
	//*/


	//char arr1[] = "abc";
	//// ‘a' 'b' 'c' '\0'
	//char arr2[] = {'a','b','c'};
	////  'a' 'b' 'c' 
	//printf("%d\n", sizeof(arr1));	// 4		sizeof 计算所占空间大小
	//printf("%d\n", sizeof(arr2));	// 3
	//printf("%d\n", strlen(arr1));	// 3
	//printf("%d\n", strlen(arr2));	// 随机值

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
		/*	& arr[0] = 00CFFD88		
			& arr[1] = 00CFFD8C		相差4个字节
			& arr[2] = 00CFFD90
			& arr[3] = 00CFFD94
			& arr[4] = 00CFFD98
			& arr[5] = 00CFFD9C
			& arr[6] = 00CFFDA0
			& arr[7] = 00CFFDA4
			& arr[8] = 00CFFDA8
			& arr[9] = 00CFFDAC	    */

	}




	return 0;
}