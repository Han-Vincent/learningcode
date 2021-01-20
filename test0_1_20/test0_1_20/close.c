#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main()
{
	char input[10] = {0};
	system("shutdown -s -t 60");
	again: 
		printf("请输入“我是猪”，否则计算机将在一分钟内关机,请输入：\n");
		scanf("%s", &input);
		if (0==strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			printf("已停止关闭计算机\n");
		}
		else
		{
			goto again;
		}



	return 0;
}