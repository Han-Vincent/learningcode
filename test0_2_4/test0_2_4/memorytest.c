#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位, 保存在内存的高地址中。

//写一段代码来判断当前机器的字节序是大端还是小端

//int check_sys()
//{
//	int a = 1;
//	char* p = &a;
//	return *p;
//	//返回1，小端
//	//返回0，大端
//
//	//或者直接 return *(char*)&a;
//
//
//}

//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
////结构体内存对齐。 妙啊
//
//int main()
//{
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//struct S5
//{
//	char c1;//对齐数为1
//	int arr[2];//对齐数为4
//	int i;//对齐数为4
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	printf("%d\n", sizeof(struct S5));
//	return 0;
//}
//
