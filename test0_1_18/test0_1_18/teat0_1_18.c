#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//��������ӣ�շת�������
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	printf("��������������:");
	scanf("%d%d", &m, &n);
	
	while (m%n)
	{
		r = m%n;
		m = n;
		n = r;

	}
	printf("%d\n", n);


	return 0;
}