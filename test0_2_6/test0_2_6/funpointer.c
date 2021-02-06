#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	
	//函数指针 是指向函数的指针-存放函数地址的一个指针
	int(*pAdd)(int, int) = &Add;
	printf("%d\n", pAdd(a, b));
	printf("%d\n", (*pAdd)(a, b));

	//&函数名 和 函数名 都是函数的地址
	printf("%p\n", &Add);
	printf("%p\n", Add);

	int(* pfarr[4])(int, int); //pfArr是一个函数指针的 数组 
	int(*(*ppfarr)[4])(int, int) = &pfarr;

	//ppfarr 是一个数组指针，指针指向的数组有四个元素
	//指向的数组的每个元素类型是一个函数指针int(* )(int,int)







	return 0;
}

/*

两段有趣的代码

//代码1
(*(void (*)())0)();

void(*  ) ()  是函数指针类型
（void (*)()) 0  把0强制类型转换成一个函数的地址
(*    (void (*)())0   ) ( )
调用0地址处的该函数


//代码2
void (*signal(int , void(*)(int)))(int);

signal(int ,void(*  )(int))

signal是一个函数声明
signal函数的参数有两个，第一个是int，
第二个是函数指针，该函数指针指向的函数的参数是int，返回类型为void
signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型为void

可以把以上代码化简：

typedef void(* pfun_t )(int)

pfun_t (*signal(int,pfun_t);

//它就是一个返回函数指针的的函数声明

*/