#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void game()
{
	
	int a = rand()%100+1;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int guess = 0;
		printf("请输入你猜的数:\n");
		scanf("%d", &guess);

		if (guess > a)
		{
			printf("大了,你还有%d次机会\n", 4- i);
		}
		else if (guess < a)
		{
			printf("小了，你还有%d次机会\n", 4- i);
		}
		else
		{
			printf("猜对了!\n");
			break;
		}

	}

}
void menu()

{
	printf("-------------------------------\n");
	printf("---- 1.paly ------ 0.exit -----\n");
	printf("-------------------------------\n");

}


/* 生成随机数的方法

rand() 会随机生成一个位于 0 ~ RAND_MAX 之间的整数。

RAND_MAX 是 <stdlib.h> 头文件中的一个宏，它用来指明 rand() 所能返回的随机数的最大值。
C语言标准并没有规定 RAND_MAX 的具体数值，只是规定它的值至少为 32767。
在实际编程中，我们也不需要知道 RAND_MAX 的具体值，把它当做一个很大的数来对待即可。

rand() 函数产生的随机数是伪随机数，是根据一个数值按照某个公式推算出来的，这个数值我们称之为“种子”。
种子在每次启动计算机时是随机的，但是一旦计算机启动以后它就不再变化了；
也就是说，每次启动计算机以后，种子就是定值了，所以根据公式推算出来的结果（也就是生成的随机数）就是固定的。

我们可以通过 srand() 函数来重新“播种”，这样种子就会发生改变。srand() 的用法为：

void srand (unsigned int seed);

它需要一个 unsigned int 类型的参数。在实际开发中，我们可以用时间作为参数，只要每次播种的时间不同，那么生成的种子就不同，最终的随机数也就不同。

使用 <time.h> 头文件中的 time() 函数即可得到当前的时间（精确到秒），就像下面这样：

srand((unsigned)time(NULL));


*/




int main()
{
	srand((unsigned int)time(NULL));
	int choice = 0;
	do
	{

		menu();
		printf("请输入你的选择");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (choice);	//注意 ; 
		

	return 0;
}