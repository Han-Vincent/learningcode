#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////�й� ����������
//
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n",a);
//
//	int b = 5.0/ 2;
//	printf("%d\n", b);
//
//	double c = 5.0 / 2.0;
//	printf("%lf\n", c);
//	//ע�⸡�����Ĵ�ӡ %lf
//
//
//	return 0;
//}










////��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����
//
//int main()
//{
//	int x = 11;
//	//00000000 00000000 00001011
//	//00000000 00000000 00000001
//	int a = 1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((x >> i)&a == 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}












////���ܴ�����ʱ��������������������ʵ���������Ľ���
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("begain a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after exchange a=%d,b=%d\n", a, b);
//	return 0;
//}