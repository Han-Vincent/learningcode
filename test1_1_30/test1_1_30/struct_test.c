#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	// 0000 0011
	// 0000 0000 0000 0000 0000 0000 0000 0011
	// 0111 1111
	// 0000 0000 0000 0000 0000 0000 0111 1111 
	// 0000 0000 0000 0000 0000 0000 1000 0010 
	// 1000 0010
	// 1111 1111 1111 1111 1111 1111 1000 0010 ²¹Âë
	// 1000 0000 0000 0000 0000 0000 0111 1110 Ô´Âë
	//-126
	printf("%d\n", c);

	return 0;
}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[10];
//};
//
//
//int main()
//{
//	struct Stu s1 = { "ÕÅÈý", 23, "123123" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	return 0;
//}