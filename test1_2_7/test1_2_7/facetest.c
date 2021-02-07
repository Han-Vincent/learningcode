#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//相当于这个结构体指针+结构体大小（20）	0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//变成长整型再加1		0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//变为整形指针 +1（4）	0x00100004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//小端存储
//	//低地址								  高地址
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4 ，02000000
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式，逗号表达式的值是最后一个表达式的值
//											 //所以1，3，5存入数组
//	// 1 3
//	// 5 0
//	// 0 0 
//	int *p;
//	p = a[0];//第一行数组名
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];	//注意int (*)[4]”和“int (*)[5]”的不不同
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//*(aa+1) ==aa[1]第二行首元素的地址 
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}
//// 1 2 3 4 5 
//// 6 7 8 9 10

//int main()
//{
//
//	char *a[] = { "work", "at", "alibaba" };//数组指针,把三个常量字符串的首地址给数组a[]，数组a每个元素的类型为char*
//	char**pa = a;//数组名表示首元素地址，pa指向的元素类型是char*
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//++cpp改变cpp的值
	printf("%s\n", *--*++cpp + 3);//上次++也算
	printf("%s\n", *cpp[-2] + 3);//不改变cpp的值，注意cpp指向的位置
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}