#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////Ұָ������
////1.ָ��δ��ʼ��
//int main()
//{
//	int i;//�ֲ�����δ����ʼ����Ĭ�����ֵ
//	int* p;//�ֲ�����δ����ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	//����
//	return 0;
//}
//
////ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}
//
////3.ָ��ָ��Ŀռ��Ѿ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();//warning C4172: ���ؾֲ���������ʱ�����ĵ�ַ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//���Բ鿴�ڴ�仯
//		*(p++) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//	//���Բ鿴�ڴ�仯
//	return 0;
//}