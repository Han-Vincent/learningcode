#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ַ�������

////����������
//int my_strlen(char* p)
//{ 
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}

////��ָ������ַ�������
//int my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//int main()
//{
//	char a[] = "qwe";
//	char* pa = &a;
//	int ret = my_strlen(pa);
//	printf("%d\n", ret);
//
//
//	return 0;
//}

int main()
{
	int a = 1;
	int* pa = &a;
	int** ppa = &pa;
	int*** pppa = &ppa;
	/*
	������ָ�룺

	int*    (* ָint)	int   * 
	int**	(* ָint*)	int*  *
	
	*/

	int b = 20;
	*ppa = &b;
	//�ȼ��� pa = &b;

	**ppa = 30;
	//�ȼ���*pa = 30;
	//�ȼ���a = 30;

	//ָ������
	int* arr2[] = { &a, &b };

	return 0;
}