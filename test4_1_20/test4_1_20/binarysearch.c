#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//				本质上arr是一个指针
int binary_search(int arr[],int k,int sz)
{
	
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid -1;
		}
		else
		{
			return mid;
		}

	}
	return -1;



}



int main()
{
	int sz = 0;
	int k = 0;
	int ret = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入你要查找的值：\n");
	scanf("%d", &k);
						// 传递过去的是数组arr首元素的地址
	ret = binary_search(arr, k, sz);
	if (-1 == ret)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，下标为%d",ret);
	}






	return 0;
}








