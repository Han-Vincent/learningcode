#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int k = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &k);
	while (left <= right)
	{
		mid = (left + right) / 2;	//���ע��λ��

		if (arr[mid]<k)
		{
			left = mid + 1;
		}

		else if (arr[mid]>k)
		{
			right = mid - 1;
		}

		else 	 
			break;

	}
	if (left <= right)		//�
		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
	else
	{
		printf("û�ҵ�\n");
	}

	return 0;
}


