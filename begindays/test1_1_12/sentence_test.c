#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char input = 'a';
	printf("����С��\n");
	printf("��Ҫÿ������ÿ������ѧϰ8h�𣿣�������y/n��\n");
	scanf("%c", &input);

	if (input == 'y')
		printf("��н������ʳ���ǣ��Ƹ�����\n");
	else
		printf("������\n");

	return 0;
}


