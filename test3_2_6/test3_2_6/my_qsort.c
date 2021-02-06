#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};


int cmp_int(const void*e1, const void*e2)
{
	return *((int*)e1) - *((int*)e2);
}

int cmp_Stu_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_Stu_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

void swap(void* e1,void* e2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char a = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = a;

	}

}

void bubble_sort(void* base, int num, int width, int(*cmp)(void*, void*))
{
	int i = 0;
	//趟数
	for (i = 0; i < num; i++)
	{
		//每一趟比较的次数
		int j = 0;
		for (j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);

			}
		}
	}
}




int main()
{
	/*int arr1[10] = { 11, 44, 22, 55, 33, 77, 66, 88, 0, 99 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr1, sz, sizeof(arr1[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr1[i]);
	}*/

	struct Stu s1[3] = { { "zhangsan", 12 }, { "lisi", 22 }, { "hhh", 20 } };
	int sz = sizeof(s1) / sizeof(s1[0]);
	bubble_sort(s1, sz, sizeof(s1[0]), cmp_Stu_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ",s1[i].name);
		printf("%d ", s1[i].age);
	}




	return 0;
}
