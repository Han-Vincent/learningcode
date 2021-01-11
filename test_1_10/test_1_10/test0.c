#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	NON_BINARY
//};	//注意：此处应注意输入分号
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
//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
int main()
{
	char arr1[] = "abc";
	// "abc" -- 'a' 'b' 'c' '\0'   --'\0'为字符串的结束标志
	char arr2[] = { 'a', 'b', 'c' };
	//‘a' 'b' 'c'
	char arr3[] = { 'a', 'b', 'c', '\0' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}