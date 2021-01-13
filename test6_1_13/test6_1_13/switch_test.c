#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;		//m==3
	case 2:
		n++;		//n==2
	case 3:
		switch (n)		//switch(2)-->m=4,n=3-->break嵌套里面的switch-->m==5
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}

	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}

