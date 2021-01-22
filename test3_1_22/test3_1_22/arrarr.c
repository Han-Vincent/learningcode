#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr1[3][4] = { 1, 2, 3, 4 };
	int arr2[3][4] = { { 1, 2 }, { 3, 4 } };
	int arr3[][3] = { { 2, 3 }, { 4, 5 } };
	//二维数组的初始化不能缺少列
	
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf(" %d ", arr1[i][j]);
	//	}
	//	printf("\n");
	//}

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf(" &arr[%d][%d] = %p ",i,j,&arr1[i][j]);
		}
		printf("\n");
	}



	return 0;
}
