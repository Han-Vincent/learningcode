#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//int a = 1;
	//int b = 0;

	///*if (a > 5)
	//	b = 3;
	//else
	//	b = -3;*/

	////ת��Ϊ�������ʽΪ��
	//b= (a > 5 ? 3 : -3);

	////ʹ���������ʽʵ�����������нϴ�ֵ��
	//int max = (a > b ? a : b);




	//���ű��ʽ
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	//���ű��ʽ�������ö��Ÿ����Ķ�����ʽ��
	//���ű��ʽ��������������ִ�С��������ʽ�Ľ�������һ�����ʽ�Ľ����
	printf("%d\n", c);//13


	return 0;
}






//int main()
//{
//	short s = 0;
//	int a = 11;
//	printf("%d\n", sizeof(s = a+5));//2
//	printf("%d\n", s);//0
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = {0};
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	return 0;
//}