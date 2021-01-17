#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int k = 0;
	int left = 0;
	int right= sizeof(arr) / sizeof(arr[0])-1;
	int mid = (left + right) / 2;
	printf("请输入要查找的数字：");
	scanf("%d", &k);
	while (left<=right)
	{

		if (arr[mid]<k)
		{
			left = mid+1;
		}

		else if (arr[mid]>k)
		{
			right = mid-1;
		}

		else if (k ==arr[mid])
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		
	}
	if (left <= right)		//妙啊
		printf("找到了，下标是：%d\n", mid);
	else
	{
		printf("没找到");
	}

	return 0;
}





////编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
////提示登录成，如果三次均输入错误，则退出程序。
//
//
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (strcmp(psw, "password") == 0)//==不能发用来比较两个字符串是否相等，应该使用一个库函数-strcmp 
//			break;
//	}
//	if (i == 3)
//		printf("exit\n");
//	else
//		printf("log in\n");
//}






////编写代码，演示多个字符从两端移动，向中间汇聚。
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to seb's";
//	char arr2[] = "                ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//while循环实现
//	while (left <= right)
//	{
//		Sleep(500);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		system("cls");//执行系统命令的一个函数-cls -清空屏幕
//	}
//		printf("%s\n", arr2);
//	
//	return 0;
//}






////在一个有序数组中查找具体的某个数字n。 
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求出数组元素个数
//	printf("请输入要查找的数字：");
//	scanf("%d", &k);
//	for (i = 0; i <sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//		}
//
//	}
//	if (sz==i)
//	{
//		printf("没找到\n");
//	}
//
//
//	return 0;
//}



////计算n的阶乘及其阶乘总和
//int main()
//{	
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	scanf("%d",&j);
//	
//	for (i; i<=j; i++)
//	{
//		ret *= i;
//		sum += ret;
//		
//	}
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//
//
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hahaha\n");
//		}//此循环第一次结束 j恒等于10；所以总循环只打印10次hahaha
//	}
//
//
//	return 0;
//}
//




////以下代码循环几次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	printf("%d", k);
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	printf("%d", k);
//	return 0;
//}
////0次，注意赋值语句和判断语句





////密码test
//
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s",&password);
//	printf("请确认（Y/N）");
//	while ((ch=getchar())== '\n')
//	{
//		break;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	return 0;
//}
//





////代码1
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)	//EOF-end of file -> -1
//		putchar(ch);

//	//当程序运行的时候,没有文档结尾,只能找一个命令来替代文档结尾,那就是Ctrl+z,当你输入Ctrl + z的时候, 程序提示已得到文档结束标志
//	return 0;
//}





////代码2
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <'0'|| ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//
//





//#include <string.h>
//
////结构体
//
//struct Books
//{
//	char name[20];
//	char author[50];
//	char subject[100];
//	int book_id;
//
//};
//
//
//int main()
//{
//	struct Books book = { "我是个年轻人", "nobody", "我不太开心", 112233};
//	printf("name is %s,author is %s,subject is %s,book_id is %d\n", book.name, book.author, book.subject, book.book_id);
//	//使用指针
//	struct Books* pb = &book;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->book_id);
//
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).book_id);
//
//	//修改结构体变量的值
//
//	book.book_id = 123;
//	printf("book newid is %d\n",book.book_id);
//	//book.name = "哈哈哈"; (错误表达)
//	
//	strcpy(book.name, "哈哈哈"); //strcpy-string copy -字符串拷贝-库函数-string.h
//	printf("book new name  is %s\n", book.name);
//
//
//	return 0;
//}
//
