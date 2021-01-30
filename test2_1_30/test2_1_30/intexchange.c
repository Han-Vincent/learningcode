#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int n = 10;
	char *pc = &n;
	int *pi = &n;

	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	printf("%p\n", pi);
	printf("%p\n", pi + 1);*/


	int n = 0x11223344;
	char *pc = (char *)&n;
	int *pi = &n;
	*pc = 0;   //重点在调试的过程中观察内存的变化。
	*pi = 0;

	return  0;
}

//int main()
//{
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//	//的a,b要进行整形提升,但是c不需要整形提升 a,b整形提升之后,变成了负数,所以表达式
//	//a == 0xb6, b == 0xb600 的结果是假
//
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//,c只要参与表达式运算,就会发生整形提升,表达式 +c ,就会发生提升
//	printf("%u\n", sizeof(!c));
//	return 0;
//}