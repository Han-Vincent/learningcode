#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////struct 结构体关键字  Stu ->结构体标签     
////struct Stu ->结构体类型
////所以定义变量时要用 struct Stu (在没有typedef的时候)
//
//typedef struct Stu
//{
//	//成员变量
//	char name[10];
//	int age;
//
//}Stu;//分号不能丢
//
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 1, 2 }; //声明类型的同时定义变量p1//
//
////结构的成员可以是标量、数组、指针，甚至是其他结构体
//
//struct Pointers
//{
//	int a;
//	struct Point p;
//
//};
//
//int main()
//{
//	struct Stu s1 = { "hhh", 12 };//局部变量
//	Stu s2 = { "qwe", 11 };
//	struct Pointers p2 = { 11, { 2, 3 } };
//
//	printf("%d\n", p2.p.y);
//
//	struct Stu* ps = &s1;
//	printf("name = %s   age = %d\n", (*ps).name, (*ps).age);
//    //使用结构体指针访问指向对象的成员
//	 printf("name = %s   age = %d\n", ps->name, ps->age);
//
//	return 0;
//}
//

struct S
{
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);  //传结构体
	print2(&s); //传地址
	return 0;
}

//print2函数更好
//函数传参的时候，参数是需要压栈的。 
//如果传递一个结构体对象的时候，结构体过大，参数压栈
//的的系统开销比较大，所以会导致性能的下降。