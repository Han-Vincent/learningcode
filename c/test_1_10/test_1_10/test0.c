#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	NON_BINARY
//};	//ע�⣺�˴�Ӧע������ֺ�
//
//
//int main()
//{
//	printf("%d\n", MALE);		//0
//	printf("%d\n", FEMALE);		//1
//	printf("%d\n", NON_BINARY);	//2
//
//	return 0;
//
//}



#include <stdio.h>
//������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
int main()
{
	char arr1[] = "abc";
	// "abc" -- 'a' 'b' 'c' '\0'   --'\0'Ϊ�ַ����Ľ�����־
	char arr2[] = { 'a', 'b', 'c' };
	//��a' 'b' 'c'
	char arr3[] = { 'a', 'b', 'c', '\0' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}