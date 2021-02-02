#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* my_strcopy(char* dest, const char* str)
{	
	char* ret = dest;
	assert(dest != NULL);
	assert(str!= NULL);

	while (*dest++ = *str++)
	{
		;
	}

	return ret;

}


int main()
{
	char arr1[] = "######";
	char arr2[] = "hhh";

	printf("%s\n",my_strcopy(&arr1, &arr2));



}