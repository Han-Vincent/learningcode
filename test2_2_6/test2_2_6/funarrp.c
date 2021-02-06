#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Div(int x, int y)
{
	return x / y;
}
int Mul(int x, int y)
{
	return x * y;
}


//int main()
//{
//	int(*parr[])(int, int) = { 0, &Add, &Sub, &Div, &Mul };//转移表
//	//int(*parr[])(int, int) = { 0, Add, Sub, Div, Mul }; //也可以直接写函数名
//	int input = 1;
//
//	do
//	{
//		printf("*************************\n");
//		printf(" 0:exit	 1:Add   2:Sub \n");
//		printf(" 3:Div   4:Mul \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("exit\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个数字：");	
//			scanf("%d %d", &x,&y);
//			printf("%d\n", (*parr[input])(x, y));
//			//printf("%d\n", parr[input](x, y));
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//
//	} while (input);
//
//	return 0;
//}

//回调函数
int calc(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &x,&y);
	printf("%d\n", (*p)(x, y));
}


int main()
{
	
	int input = 1;

	do
	{
		printf("*************************\n");
		printf(" 0:exit	 1:Add   2:Sub \n");
		printf(" 3:Div   4:Mul \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出\n");
			break;
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Div);
			break;
		case 4:
			calc(Mul);
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);

	return 0;
}
