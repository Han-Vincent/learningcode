#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define NUM 200		//define�����ʶ������

#define MAX(X,Y) (X>Y ? X:Y)	//define�����-������

int main()
{
	int a = 100;
	int b = NUM;
	printf("%d\n", b);
	int max = MAX(a,b);		//��ķ�ʽ�����ֵ
	printf("%d\n", max);



	return 0;
}