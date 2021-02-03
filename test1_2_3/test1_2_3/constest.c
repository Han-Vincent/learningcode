#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strlen(char* p)
{
	assert(p != NULL);
	char* start = p;
	char* end = p;

	while (*end != '\0')
	{
		end++;
	}
	return end - start;

}
int main()
{
	char arr[] = "asdasd";
	printf("%d\n", my_strlen(arr));
	return 0;
}

//int main()
//{
//	
//	//printf("%s\n", my_strcopy(&arr1, NULL));//Assertion failed: str!= NULL, file e:\learningcode\c\learningcode\test4_2_2\test4_2_2\strcopymy.c, line 9
//
//	//const(凉皮)
//
//	const int num = 10;
//	int n = 0;
//	const int* p = &num;
//	//*p = 20;//error const 放在指针变量的*左边时，修饰的是*p，即*p是不能被改变的，也就是num的值不能被改变 (p=&n ✔)
//	int* const p = &num;
//	//p = &n;//error const 放在指针变量的*右边时，修饰的是p，即p是不能被改变的，p对应的只能是num的地址而不是其他变量的地址  (*p=10 ✔)
//
//}
/*const修饰指针变量的时候：
1. const如果放在*的左边，修饰的是指针指向的内容，保证指针指向的内容不能通过指针来改
变。但是指针变量本身的内容可变。
2. const如果放在*的右边，修饰的是指针变量本身，保证了指针变量的内容不能修改，但是指
针指向的内容，可以通过指针改变
*/
//void test1()
//{
//
//	int n = 10;
//	int m = 20;
//	int *p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//代码2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int *const p = &n;
//	*p = 20; //ok?
//	p = &m;  //ok?
//}
//int main()
//{
//	//测试无cosnt的
//	test1();
//	//测试const放在*的左边
//	test2();
//	//测试const放在*的右边
//	test3();
//	return 0;
//}

