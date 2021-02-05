#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char* pstr = "hello bit.";//本质上是把常量字符串hello bit 的首地址放到bit中，常量字符串不能被更改
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

/*str3 str4 指向的是同一个常量字符串
C/C++会把常量字符串存储到单独的一个内存区域，
当几个指针。指向同一个字符串的时候，他们实际会指向同一块内存。但是用相同的常量字符串去初始
化不同的数组的时候就会开辟出不同的内存块。所以str1和str2不同，str3和str4不同。
*/


//数组指针
// int (*p)[10]; p先于*结合说明p是一个指针变量,指向一个有10个整形的数组
//[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;//指针指向第一个元素
	int(*pa)[10] = &arr;//数组指针 指向有10个元素的数组，数组每个元素类型是int
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
		printf("%d ", p[i]);
		printf("%d ", *(p + i));//arr[i]==*(arr+i)==*(p+i)==p[i]  arr -数组名- 数组名就是首元素地址 p也是首元素地址 p==arr

		//printf("%d ", *(*pa + i));
		//printf("%d ", (*pa)[i]);//*pa==arr  pa是指针，指向arr，所以*pa 就是arr

		

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
//}void print_arr2(int (*p)[5],int row,int col)//数组指针 指向二维数组的第一行的一维数组
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
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5); //arr -数组名- 数组名就是首元素地址，但此时二维数组的首元素,也就是第一个一维数组
//	return 0;
//}





