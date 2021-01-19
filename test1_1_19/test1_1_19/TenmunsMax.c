#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//求是个整数中的最大值

int main()
{
	int arr[] = { 1, 0, 3, 4, 50, 6, 7, -1, 9, -10 };
	int i = 0;
	int max = arr[0];	//max=0 × 因为所有数不一定大于0
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}

	}
	printf("%d\n", max);
	

	return 0;
}