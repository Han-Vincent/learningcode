#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

//���100��200�������������

int main()
{
	int n = 0;
	int i = 0;
	int count = 0;
	
	for (i = 101; i <=200; i+=2)
	{
		int j = 0;
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}		
		}
		if (j>sqrt(i))
		{
			printf(" %d ",i);
			count++;
		}
	}
	printf("count=%d", count);


	return 0;
}