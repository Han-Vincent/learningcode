#define _CRT_SECURE_NO_WARNINGS 1

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.#include <stdio.h>
void print(int n)
{
	if (n/10!=0)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 1234;
	print(num);
	return 0;
}