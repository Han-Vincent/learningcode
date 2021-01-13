#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c'};
	char arr3[] = { 'a', 'b', 'c', '\0' };
	//strlen  string length ¼ÆËã×Ö·û´®³¤¶È
	printf("%d\n", strlen(arr1));   // 3
	printf("%s\n", arr1);
	
	printf("%d\n", strlen(arr2));   //15
	printf("%s\n", arr2);

	printf("%d\n", strlen(arr3));   //3
	printf("%s\n", arr3);


	return 0;
}
