#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char input = 'a';
	printf("加入小米\n");
	printf("你要每天早起每天至少学习8h吗？（请输入y/n）\n");
	scanf("%c", &input);

	if (input == 'y')
		printf("年薪百万，衣食无忧，财富自由\n");
	else
		printf("穷苦打工人\n");

	return 0;
}


