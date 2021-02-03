#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* my_strcopy(char* dest, const char* str)
{	
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(str!= NULL);

	while (*dest++ = *str++)
	{
		;
	}
	//如果直接return dest 会return "##" 因为while及时dest已经改变，不再是最开始的dest，它最后指向'\0'之后的那个字符所在的地址
	return ret;

}


int main()
{
	char arr1[] = "######";
	char arr2[] = "hhh";
	
	printf("%s\n",my_strcopy(&arr1, &arr2));
	//printf("%s\n", my_strcopy(&arr1, NULL));//Assertion failed: str!= NULL, file e:\learningcode\c\learningcode\test4_2_2\test4_2_2\strcopymy.c, line 9

	////const(凉皮)

	//const int num = 10;
	//int n = 0;
	//const int* p = &num;
	////*p = 20;//error const 放在指针变量的*左边时，修饰的是*p，即*p是不能被改变的，也就是num的值不能被改变 (p=&n ✔)
	//int* const p = &num;
	////p = &n;//error const 放在指针变量的*右边时，修饰的是p，即p是不能被改变的，p对应的只能是num的地址而不是其他变量的地址  (*p=10 ✔)


}