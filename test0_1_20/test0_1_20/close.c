#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main()
{
	char input[10] = {0};
	system("shutdown -s -t 60");
	again: 
		printf("�����롰��������������������һ�����ڹػ�,�����룺\n");
		scanf("%s", &input);
		if (0==strcmp(input, "������"))
		{
			system("shutdown -a");
			printf("��ֹͣ�رռ����\n");
		}
		else
		{
			goto again;
		}



	return 0;
}