#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//memset

int main()
{
	char arr1[] = "hahaha";
	memset(arr1, 'a', 4);
	printf("%s\n", arr1);
	
	return 0;
}





////strcpy
//
//int main()
//{
//	char arr1[] = "hahaha";
//	char arr2[] = "------------";
//	//			   hahaha\0----
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//
//
//	return 0;
//}