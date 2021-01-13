#define _CRT_SECURE_NO_WARNINGS 1

////continue 代码实例1	 运行结果：1 2 3 4...(死循环)
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//continue 代码实例2  运行结果：2 3 4 6 7 8 9 10 11
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i = i + 1;
		if (i == 5)
			continue;
		printf("%d ", i);
	}

	return 0;
}