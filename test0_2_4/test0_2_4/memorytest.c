#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ�У�
//С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ, �������ڴ�ĸߵ�ַ�С�

//дһ�δ������жϵ�ǰ�������ֽ����Ǵ�˻���С��

//int check_sys()
//{
//	int a = 1;
//	char* p = &a;
//	return *p;
//	//����1��С��
//	//����0�����
//
//	//����ֱ�� return *(char*)&a;
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
////�ṹ���ڴ���롣 �
//
//int main()
//{
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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
//	char c1;//������Ϊ1
//	int arr[2];//������Ϊ4
//	int i;//������Ϊ4
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
