#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//				������arr��һ��ָ��
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
	printf("��������Ҫ���ҵ�ֵ��\n");
	scanf("%d", &k);
						// ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
	ret = binary_search(arr, k, sz);
	if (-1 == ret)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d",ret);
	}






	return 0;
}








