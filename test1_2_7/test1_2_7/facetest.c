#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//�൱������ṹ��ָ��+�ṹ���С��20��	0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//��ɳ������ټ�1		0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//��Ϊ����ָ�� +1��4��	0x00100004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//С�˴洢
//	//�͵�ַ								  �ߵ�ַ
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4 ��02000000
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ�����ű��ʽ��ֵ�����һ�����ʽ��ֵ
//											 //����1��3��5��������
//	// 1 3
//	// 5 0
//	// 0 0 
//	int *p;
//	p = a[0];//��һ��������
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];	//ע��int (*)[4]���͡�int (*)[5]���Ĳ���ͬ
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//*(aa+1) ==aa[1]�ڶ�����Ԫ�صĵ�ַ 
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}
//// 1 2 3 4 5 
//// 6 7 8 9 10

//int main()
//{
//
//	char *a[] = { "work", "at", "alibaba" };//����ָ��,�����������ַ������׵�ַ������a[]������aÿ��Ԫ�ص�����Ϊchar*
//	char**pa = a;//��������ʾ��Ԫ�ص�ַ��paָ���Ԫ��������char*
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//++cpp�ı�cpp��ֵ
	printf("%s\n", *--*++cpp + 3);//�ϴ�++Ҳ��
	printf("%s\n", *cpp[-2] + 3);//���ı�cpp��ֵ��ע��cppָ���λ��
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}