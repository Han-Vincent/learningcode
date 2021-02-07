#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//
////	//一维数组
////	int a[] = { 1, 2, 3, 4 };
////	printf("%d\n", sizeof(a));			//16	数组所占空间大小
////	printf("%d\n", sizeof(a + 0));		//4/8	第一个元素的地址
////	printf("%d\n", sizeof(*a));			//4		第一个元素
////	printf("%d\n", sizeof(a + 1));		//4/8	第二个元素的地址
////	printf("%d\n", sizeof(a[1]));		//4		第二个元素
////	printf("%d\n", sizeof(&a));			//4/8	整个数组的地址
////	printf("%d\n", sizeof(*&a));		//16	整个数组 &数组名 此时的数组名表示整个数组
////	printf("%d\n", sizeof(&a + 1));		//4/8	注意：不是第二个元素的地址，因为&a是数组的地址，&a+1是跳过了整个数组的下一个地址
////	printf("%d\n", sizeof(&a[0]));		//4/8	第一个元素的地址
////	printf("%d\n", sizeof(&a[0] + 1));	//4/8	第二个元素的地址
////
////	//字符数组
////
////	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
////	printf("%d\n", sizeof(arr));		//6 	sizeof计算的是数组的大小
////	printf("%d\n", sizeof(arr + 0));	//4/8	首元素地址
////	printf("%d\n", sizeof(*arr));		//1		首元素
////	printf("%d\n", sizeof(arr[1]));		//1		第二个元素
////	printf("%d\n", sizeof(&arr));		//4/8	数组的地址
////	printf("%d\n", sizeof(&arr + 1));	//4/8	跳过整个数组后的地址
////	printf("%d\n", sizeof(&arr[0] + 1));//4/8	第二个元素的地址
////
////	//strlen所作的是一个计数器的工作，
////	//它从内存的某个位置（可以是字符串开头，中间某个位置，甚至是某个不确定的内存区域）开始扫描，
////	//直到碰到第一个字符串结束符'\0'为止，然后返回计数器值(长度不包含'\0')
////
////	printf("%d\n", strlen(arr));		//随机值a
////	printf("%d\n", strlen(arr + 0));	//随机值a
////	//printf("%d\n", strlen(*arr));		// 因为*arr=='a' ->97 strlen把97当作地址，相当于访问的是0x00000061的地址，error非法访问内存
////	//printf("%d\n", strlen(arr[1]));	//同上
////	printf("%d\n", strlen(&arr));		//随机值a
////	printf("%d\n", strlen(&arr + 1));	//随机值a-6	 &arr取的是整个数组的地址
////	printf("%d\n", strlen(&arr[0] + 1));//随机值a-1
////
////	char arr[] = "abcdef";//=={ 'a', 'b', 'c', 'd', 'e', 'f' ,'\0'};
////	printf("%d\n", sizeof(arr));		//7		！！！特别注意sizeof计算的是所占空间大小，不在乎'\0'
////	printf("%d\n", sizeof(arr + 0));	//4/8	首元素地址
////	printf("%d\n", sizeof(*arr));		//1		首元素
////	printf("%d\n", sizeof(arr[1]));		//1		第二个元素
////	printf("%d\n", sizeof(&arr));		//4/8	整个数组的地址
////	printf("%d\n", sizeof(&arr + 1));	//4/8	跳过整个数组后的地址
////	printf("%d\n", sizeof(&arr[0] + 1));//4/8	第二个元素的地址
////	printf("%d\n", strlen(arr));		//6
////	printf("%d\n", strlen(arr + 0));	//6
////	//printf("%d\n", strlen(*arr));		//err
////	//printf("%d\n", strlen(arr[1]));	//err
////	printf("%d\n", strlen(&arr));		//6		会有 : warning C4047: “函数”:“const char *”与“char (*)[7]”的间接级别不同
////	printf("%d\n", strlen(&arr + 1));	//随机值and同上警告
////	printf("%d\n", strlen(&arr[0] + 1));//5
////
////	char *p = "abcdef";//把常量字符串的地址给p	其实只是把常量字符串的首地址给p
////	printf("%d\n", sizeof(p));			//4/8
////	printf("%d\n", sizeof(p + 1));		//4/8	字符b的地址
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
////	printf("%d\n", strlen(&p));			//随机值
////	printf("%d\n", strlen(&p + 1));		//随机值
////	printf("%d\n", strlen(&p[0] + 1));	//5
//
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));			//48
//	printf("%d\n", sizeof(a[0][0]));	//4
//	printf("%d\n", sizeof(a[0]));		//16	相当于第一行的数组名	
//	printf("%d\n", sizeof(a[0] + 1));	//4/8	a[0]是第一行的数组名，
//										//		此数组名是第一行首元素地址,a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));		//4/8	第二行数组的地址
//	printf("%d\n", sizeof(*(a + 1)));	//16
//	printf("%d\n", sizeof(&a[0] + 1));	//4/8	第二行数组的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));			//16
//	printf("%d\n", sizeof(a[3]));		//16 sizeof不参与计算也不访问，只是根据类型返回相应的值
//
//
//
//	return 0;
//}


/*

总结： 数组名的意义：
1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
3. 除此之外所有的数组名都表示首元素的地址。

*/

