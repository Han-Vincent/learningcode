#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[],int sz)
{
	int i = 0;
	
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ��Ҫ��������Ѿ�����
		int j = 0;//ÿ�ɶ��Ǵӵ�һ��Ԫ�ؿ�ʼ�ж�����
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//������������ݲ�����ȫ����
			}	
		}

		if (flag == 1)
		{
			break;
		}
	}

}




int main()

{
	int i = 0;
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int arr[] = { 1, 2, 4, 5, 7, 9, 10, 8, 3, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}

	return 0;
}