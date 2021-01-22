#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一只青蛙一次可以跳上1级台阶，也可以跳上2 级……它也可以跳上n 级，此时该青蛙跳上一个n级的台阶总共有多少种跳法？
//类似于斐波那契函数

int jumpfloor(int n)
{	
	int one = 1;
	int two = 2;
	int time = one+two;
	if (n>=3)
		return jumpfloor(n - 1) + jumpfloor(n - 2);
	
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n<=0)
		return 0;
	
}


int main()
{
	printf("%d\n", jumpfloor(5));

	return 0;
}