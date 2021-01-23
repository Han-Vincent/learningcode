#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("%d\n", *arr);

	printf("%p\n", arr);
	printf("%p\n", &arr);	
	printf("%p\n", &arr[0]);
	

	printf("%p\n", arr+1);
	printf("%p\n", &arr+1); //相差4*9=32
	printf("%p\n", &arr[0]+1);


	/*
		1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数
		组。
		2. &数组名，取出的是数组的地址。&数组名，数组名表示整个数组。
	    除去以上两种情况，所有的数组名都表示数组首元素的地址。
	*/ 


	return 0;
}
