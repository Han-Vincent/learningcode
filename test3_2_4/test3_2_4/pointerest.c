#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char* pstr = "hello bit.";//�������ǰѳ����ַ���hello bit ���׵�ַ�ŵ�bit�У������ַ������ܱ�����
//	printf("%s\n", pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

/*str3 str4 ָ�����ͬһ�������ַ���
C/C++��ѳ����ַ����洢��������һ���ڴ�����
������ָ�롣ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ档��������ͬ�ĳ����ַ���ȥ��ʼ
����ͬ�������ʱ��ͻῪ�ٳ���ͬ���ڴ�顣����str1��str2��ͬ��str3��str4��ͬ��
*/


//����ָ��
// int (*p)[10]; p����*���˵��p��һ��ָ�����,ָ��һ����10�����ε�����
//[]�����ȼ�Ҫ����*�ŵģ����Ա�����ϣ�������֤p�Ⱥ�*���


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;//ָ��ָ���һ��Ԫ��
	int(*pa)[10] = &arr;//����ָ�� ָ����10��Ԫ�ص����飬����ÿ��Ԫ��������int
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
		printf("%d ", p[i]);
		printf("%d ", *(p + i));//arr[i]==*(arr+i)==*(p+i)==p[i]  arr -������- ������������Ԫ�ص�ַ pҲ����Ԫ�ص�ַ p==arr

		//printf("%d ", *(*pa + i));
		//printf("%d ", (*pa)[i]);//*pa==arr  pa��ָ�룬ָ��arr������*pa ����arr

		

	}

	return 0;
}


//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}void print_arr2(int (*p)[5],int row,int col)//����ָ�� ָ���ά����ĵ�һ�е�һά����
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//			printf("%d ", (*(p+i))[j]);
//			printf("%d ", (p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1, 2, 3, 4, 5}, {2,3,4,5,6},{6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5); //arr -������- ������������Ԫ�ص�ַ������ʱ��ά�������Ԫ��,Ҳ���ǵ�һ��һά����
//	return 0;
//}





