#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����������ǣ�1.�����4�ı����ģ��Ҳ���100�ı���   2.������400�ı���
int main()
{
	int year = 0;
	printf("��������ݣ�");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d��������\n", year);

	}
	else
	{
		printf("%d�겻������\n", year);
	}



	return 0;
}