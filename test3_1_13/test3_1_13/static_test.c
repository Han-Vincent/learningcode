#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d\n", i);
//
//
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//
//	//���Ϊ1111111111
//
//
//
//
//	return 0;
//}




//void test()
//{
//	static int i = 0;		//i ��һ����̬�ľֲ����� 
//	i++;
//	printf("%d\n", i);
//
//
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//
//	//���Ϊ12345678910
//
//
//
//
//	return 0;
//}
int main()
{
	extern int global_val;
	//extern int global_val=2; //���� error C2205: ��global_val��: ���ܶԴ��п鷶Χ���ⲿ�������г�ʼ��	
	//extern-���������ⲿ����

	printf("%d\n", global_val);

	return 0;
}