#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);//0
//	printf("%d\n", !0);//1
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//4
//	test2(ch);//����������1�������ǵ�һ��Ԫ�ص� ��ַ��32λ��������4
//	return 0;
//}
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//����һ������Ϊ�پͲ��ü����жϺ���ļ����ü�������
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//1 2 3 4
	i = a++||++b||d++;//���жϵ�һ������󶼲����ж���
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//1 3 3 4
	return 0;
}