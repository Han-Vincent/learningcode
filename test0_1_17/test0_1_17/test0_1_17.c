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
	printf("������Ҫ���ҵ����֣�");
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		
	}
	if (left <= right)		//�
		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
	else
	{
		printf("û�ҵ�");
	}

	return 0;
}





////��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
////��ʾ��¼�ɣ�������ξ�����������˳�����
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
//		if (strcmp(psw, "password") == 0)//==���ܷ������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp 
//			break;
//	}
//	if (i == 3)
//		printf("exit\n");
//	else
//		printf("log in\n");
//}






////��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to seb's";
//	char arr2[] = "                ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//whileѭ��ʵ��
//	while (left <= right)
//	{
//		Sleep(500);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		system("cls");//ִ��ϵͳ�����һ������-cls -�����Ļ
//	}
//		printf("%s\n", arr2);
//	
//	return 0;
//}






////��һ�����������в��Ҿ����ĳ������n�� 
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�������Ԫ�ظ���
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d", &k);
//	for (i = 0; i <sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//		}
//
//	}
//	if (sz==i)
//	{
//		printf("û�ҵ�\n");
//	}
//
//
//	return 0;
//}



////����n�Ľ׳˼���׳��ܺ�
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
//		}//��ѭ����һ�ν��� j�����10��������ѭ��ֻ��ӡ10��hahaha
//	}
//
//
//	return 0;
//}
//




////���´���ѭ������
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
////0�Σ�ע�⸳ֵ�����ж����





////����test
//
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s",&password);
//	printf("��ȷ�ϣ�Y/N��");
//	while ((ch=getchar())== '\n')
//	{
//		break;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//	return 0;
//}
//





////����1
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)	//EOF-end of file -> -1
//		putchar(ch);

//	//���������е�ʱ��,û���ĵ���β,ֻ����һ������������ĵ���β,�Ǿ���Ctrl+z,��������Ctrl + z��ʱ��, ������ʾ�ѵõ��ĵ�������־
//	return 0;
//}





////����2
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
////�ṹ��
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
//	struct Books book = { "���Ǹ�������", "nobody", "�Ҳ�̫����", 112233};
//	printf("name is %s,author is %s,subject is %s,book_id is %d\n", book.name, book.author, book.subject, book.book_id);
//	//ʹ��ָ��
//	struct Books* pb = &book;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->book_id);
//
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).book_id);
//
//	//�޸Ľṹ�������ֵ
//
//	book.book_id = 123;
//	printf("book newid is %d\n",book.book_id);
//	//book.name = "������"; (������)
//	
//	strcpy(book.name, "������"); //strcpy-string copy -�ַ�������-�⺯��-string.h
//	printf("book new name  is %s\n", book.name);
//
//
//	return 0;
//}
//
