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
	printf("%p\n", &arr+1); //���4*9=32
	printf("%p\n", &arr[0]+1);


	/*
		1. sizeof(������)��������������Ĵ�С��sizeof�ڲ�������һ������������������ʾ������
		�顣
		2. &��������ȡ����������ĵ�ַ��&����������������ʾ�������顣
	    ��ȥ����������������е�����������ʾ������Ԫ�صĵ�ַ��
	*/ 


	return 0;
}
