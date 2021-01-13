#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	//关键字sizeof 
	//sizeof 计算的是变量/类所占空间的大小，单位是字节
	int arr[10] = {0};
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a );
  //printf("%d\n", sizeof int ); (error)

	printf("%d\n", sizeof(arr));

	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
	//由于数组中每个元素的数据类型相同
	//可以用（数组所占空间总大小）/（第一个数组元素的大小）从而求得（数组元素的个数）


	return 0;

}