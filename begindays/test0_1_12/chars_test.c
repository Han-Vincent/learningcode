#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{	
	
	printf("c:\test\32\test.c\n");
	//c:      est(32��Ϊ�˽�����ת��Ϊʮ����������Ӧ��ASCII���ַ�)    est.c
	//12 3 456 7 8 910111213

	printf("%d\n", strlen("c:\test\32\test.c")); //13
	//��������ź�˫����
	printf("%c\n", '\'');
	printf("%s\n", "\""); 

	printf("c:\'test\'32\'test.c\n");

	printf("%s\n","C\tC++\tJava\nC first appeared!\a");

		
	return 0;
}
