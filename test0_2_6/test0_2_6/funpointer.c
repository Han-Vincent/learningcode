#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	
	//����ָ�� ��ָ������ָ��-��ź�����ַ��һ��ָ��
	int(*pAdd)(int, int) = &Add;
	printf("%d\n", pAdd(a, b));
	printf("%d\n", (*pAdd)(a, b));

	//&������ �� ������ ���Ǻ����ĵ�ַ
	printf("%p\n", &Add);
	printf("%p\n", Add);

	int(* pfarr[4])(int, int); //pfArr��һ������ָ��� ���� 
	int(*(*ppfarr)[4])(int, int) = &pfarr;

	//ppfarr ��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
	//ָ��������ÿ��Ԫ��������һ������ָ��int(* )(int,int)







	return 0;
}

/*

������Ȥ�Ĵ���

//����1
(*(void (*)())0)();

void(*  ) ()  �Ǻ���ָ������
��void (*)()) 0  ��0ǿ������ת����һ�������ĵ�ַ
(*    (void (*)())0   ) ( )
����0��ַ���ĸú���


//����2
void (*signal(int , void(*)(int)))(int);

signal(int ,void(*  )(int))

signal��һ����������
signal�����Ĳ�������������һ����int��
�ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int����������Ϊvoid
signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int����������Ϊvoid

���԰����ϴ��뻯��

typedef void(* pfun_t )(int)

pfun_t (*signal(int,pfun_t);

//������һ�����غ���ָ��ĵĺ�������

*/