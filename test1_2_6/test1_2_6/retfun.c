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
//qsort������������������Ƚ�����Ԫ��(be called by ����)
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
//	//�Ƚ��������ε�ֵ
//	return (*(int*)a - *(int*)b);//��ǿ������ת��Ϊint* �ٽ�����
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
	*(char*)p = 's';//ǿ������ת��
	//*p = 0;
	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
	//void* ���͵�ָ�벻�ܽ��н����ò���


	return 0;
}