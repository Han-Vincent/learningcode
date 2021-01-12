#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{	
	
	printf("c:\test\32\test.c\n");
	//c:      est(32作为八进制数转化为十进制数所对应的ASCII码字符)    est.c
	//12 3 456 7 8 910111213

	printf("%d\n", strlen("c:\test\32\test.c")); //13
	//输出单引号和双引号
	printf("%c\n", '\'');
	printf("%s\n", "\""); 

	printf("c:\'test\'32\'test.c\n");

	printf("%s\n","C\tC++\tJava\nC first appeared!\a");

		
	return 0;
}
