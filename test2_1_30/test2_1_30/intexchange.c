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
	*pc = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
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
//	//��a,bҪ������������,����c����Ҫ�������� a,b��������֮��,����˸���,���Ա��ʽ
//	//a == 0xb6, b == 0xb600 �Ľ���Ǽ�
//
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//,cֻҪ������ʽ����,�ͻᷢ����������,���ʽ +c ,�ͻᷢ������
//	printf("%u\n", sizeof(!c));
//	return 0;
//}