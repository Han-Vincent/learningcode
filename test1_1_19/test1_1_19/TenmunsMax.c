#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//���Ǹ������е����ֵ

int main()
{
	int arr[] = { 1, 0, 3, 4, 50, 6, 7, -1, 9, -10 };
	int i = 0;
	int max = arr[0];	//max=0 �� ��Ϊ��������һ������0
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