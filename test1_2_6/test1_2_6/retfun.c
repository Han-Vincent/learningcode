#define _CRT_SECURE_NO_WARNINGS 1


/*
qsort



void qsort (void* base, 
	size_t num, 
	size_t size,
	int (*compar)(const void*,const void*));


	sort elements of array
meaning:
	Sorts the num elements of the array pointed to by base, 
	each element size bytes long, 
	using the compar function to determine the order.
base:
Pointer to the first object of the array to be sorted, converted to a void*.
num:
Number of elements in the array pointed to by base.
size_t is an unsigned integral type.
size:
Size in bytes of each element in the array.
compar:
Pointer to a function that compares two elements.
This function is called repeatedly by qsort to compare two elements.
//qsort反复调用这个函数来比较两个元素(be called by 调用)
protptype:int compar (const void* p1, const void* p2);
return value	meaning
<0				The element pointed to by p1 goes before the element pointed to by p2
0				The element pointed to by p1 is equivalent to the element pointed to by p2
>0				The element pointed to by p1 goes after the element pointed to by p2






*/

///* qsort example */
//#include <stdio.h>      /* printf */
//#include <stdlib.h>     /* qsort */
//
//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare(const void * a, const void * b)
//{
//	//比较两个整形的值
//	return (*(int*)a - *(int*)b);//先强制类型转换为int* 再解引用
//}
//
//int main()
//{
//	int n;
//	qsort(values, 6, sizeof(int), compare);
//	for (n = 0; n < 6; n++)
//		printf("%d ", values[n]);
//	return 0;
//}





int main()
{
	int a = 10;
	char c = 'q';
	void* p = &a;
	p = &c;
	*(char*)p = 's';//强制类型转换
	//*p = 0;
	//void* 类型的指针 可以接受任意类型的地址
	//void* 类型的指针不能进行解引用操作


	return 0;
}