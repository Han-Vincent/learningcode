#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//
////	//һά����
////	int a[] = { 1, 2, 3, 4 };
////	printf("%d\n", sizeof(a));			//16	������ռ�ռ��С
////	printf("%d\n", sizeof(a + 0));		//4/8	��һ��Ԫ�صĵ�ַ
////	printf("%d\n", sizeof(*a));			//4		��һ��Ԫ��
////	printf("%d\n", sizeof(a + 1));		//4/8	�ڶ���Ԫ�صĵ�ַ
////	printf("%d\n", sizeof(a[1]));		//4		�ڶ���Ԫ��
////	printf("%d\n", sizeof(&a));			//4/8	��������ĵ�ַ
////	printf("%d\n", sizeof(*&a));		//16	�������� &������ ��ʱ����������ʾ��������
////	printf("%d\n", sizeof(&a + 1));		//4/8	ע�⣺���ǵڶ���Ԫ�صĵ�ַ����Ϊ&a������ĵ�ַ��&a+1�������������������һ����ַ
////	printf("%d\n", sizeof(&a[0]));		//4/8	��һ��Ԫ�صĵ�ַ
////	printf("%d\n", sizeof(&a[0] + 1));	//4/8	�ڶ���Ԫ�صĵ�ַ
////
////	//�ַ�����
////
////	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
////	printf("%d\n", sizeof(arr));		//6 	sizeof�����������Ĵ�С
////	printf("%d\n", sizeof(arr + 0));	//4/8	��Ԫ�ص�ַ
////	printf("%d\n", sizeof(*arr));		//1		��Ԫ��
////	printf("%d\n", sizeof(arr[1]));		//1		�ڶ���Ԫ��
////	printf("%d\n", sizeof(&arr));		//4/8	����ĵ�ַ
////	printf("%d\n", sizeof(&arr + 1));	//4/8	�������������ĵ�ַ
////	printf("%d\n", sizeof(&arr[0] + 1));//4/8	�ڶ���Ԫ�صĵ�ַ
////
////	//strlen��������һ���������Ĺ�����
////	//�����ڴ��ĳ��λ�ã��������ַ�����ͷ���м�ĳ��λ�ã�������ĳ����ȷ�����ڴ����򣩿�ʼɨ�裬
////	//ֱ��������һ���ַ���������'\0'Ϊֹ��Ȼ�󷵻ؼ�����ֵ(���Ȳ�����'\0')
////
////	printf("%d\n", strlen(arr));		//���ֵa
////	printf("%d\n", strlen(arr + 0));	//���ֵa
////	//printf("%d\n", strlen(*arr));		// ��Ϊ*arr=='a' ->97 strlen��97������ַ���൱�ڷ��ʵ���0x00000061�ĵ�ַ��error�Ƿ������ڴ�
////	//printf("%d\n", strlen(arr[1]));	//ͬ��
////	printf("%d\n", strlen(&arr));		//���ֵa
////	printf("%d\n", strlen(&arr + 1));	//���ֵa-6	 &arrȡ������������ĵ�ַ
////	printf("%d\n", strlen(&arr[0] + 1));//���ֵa-1
////
////	char arr[] = "abcdef";//=={ 'a', 'b', 'c', 'd', 'e', 'f' ,'\0'};
////	printf("%d\n", sizeof(arr));		//7		�������ر�ע��sizeof���������ռ�ռ��С�����ں�'\0'
////	printf("%d\n", sizeof(arr + 0));	//4/8	��Ԫ�ص�ַ
////	printf("%d\n", sizeof(*arr));		//1		��Ԫ��
////	printf("%d\n", sizeof(arr[1]));		//1		�ڶ���Ԫ��
////	printf("%d\n", sizeof(&arr));		//4/8	��������ĵ�ַ
////	printf("%d\n", sizeof(&arr + 1));	//4/8	�������������ĵ�ַ
////	printf("%d\n", sizeof(&arr[0] + 1));//4/8	�ڶ���Ԫ�صĵ�ַ
////	printf("%d\n", strlen(arr));		//6
////	printf("%d\n", strlen(arr + 0));	//6
////	//printf("%d\n", strlen(*arr));		//err
////	//printf("%d\n", strlen(arr[1]));	//err
////	printf("%d\n", strlen(&arr));		//6		���� : warning C4047: ��������:��const char *���롰char (*)[7]���ļ�Ӽ���ͬ
////	printf("%d\n", strlen(&arr + 1));	//���ֵandͬ�Ͼ���
////	printf("%d\n", strlen(&arr[0] + 1));//5
////
////	char *p = "abcdef";//�ѳ����ַ����ĵ�ַ��p	��ʵֻ�ǰѳ����ַ������׵�ַ��p
////	printf("%d\n", sizeof(p));			//4/8
////	printf("%d\n", sizeof(p + 1));		//4/8	�ַ�b�ĵ�ַ
////	printf("%d\n", sizeof(*p));			//1
////	printf("%d\n", sizeof(p[0]));		//1 	p[0]==*(p+0)=='a'
////	printf("%d\n", sizeof(&p));			//4/8
////	printf("%d\n", sizeof(&p + 1));		//4/8
////	printf("%d\n", sizeof(&p[0] + 1));	//4/8
////
////	printf("%d\n", strlen(p));			//6
////	printf("%d\n", strlen(p + 1));		//5
////	//printf("%d\n", strlen(*p));		//err
////	//printf("%d\n", strlen(p[0]));		//err
////	printf("%d\n", strlen(&p));			//���ֵ
////	printf("%d\n", strlen(&p + 1));		//���ֵ
////	printf("%d\n", strlen(&p[0] + 1));	//5
//
//
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));			//48
//	printf("%d\n", sizeof(a[0][0]));	//4
//	printf("%d\n", sizeof(a[0]));		//16	�൱�ڵ�һ�е�������	
//	printf("%d\n", sizeof(a[0] + 1));	//4/8	a[0]�ǵ�һ�е���������
//										//		���������ǵ�һ����Ԫ�ص�ַ,a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));		//4/8	�ڶ�������ĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));	//16
//	printf("%d\n", sizeof(&a[0] + 1));	//4/8	�ڶ�������ĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));			//16
//	printf("%d\n", sizeof(a[3]));		//16 sizeof���������Ҳ�����ʣ�ֻ�Ǹ������ͷ�����Ӧ��ֵ
//
//
//
//	return 0;
//}


/*

�ܽ᣺ �����������壺
1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ��
3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��

*/

