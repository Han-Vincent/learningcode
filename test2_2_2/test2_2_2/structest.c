#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////struct �ṹ��ؼ���  Stu ->�ṹ���ǩ     
////struct Stu ->�ṹ������
////���Զ������ʱҪ�� struct Stu (��û��typedef��ʱ��)
//
//typedef struct Stu
//{
//	//��Ա����
//	char name[10];
//	int age;
//
//}Stu;//�ֺŲ��ܶ�
//
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 1, 2 }; //�������͵�ͬʱ�������p1//
//
////�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ��
//
//struct Pointers
//{
//	int a;
//	struct Point p;
//
//};
//
//int main()
//{
//	struct Stu s1 = { "hhh", 12 };//�ֲ�����
//	Stu s2 = { "qwe", 11 };
//	struct Pointers p2 = { 11, { 2, 3 } };
//
//	printf("%d\n", p2.p.y);
//
//	struct Stu* ps = &s1;
//	printf("name = %s   age = %d\n", (*ps).name, (*ps).age);
//    //ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
//	 printf("name = %s   age = %d\n", ps->name, ps->age);
//
//	return 0;
//}
//

struct S
{
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);  //���ṹ��
	print2(&s); //����ַ
	return 0;
}

//print2��������
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ� 
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ
//�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���