#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1
////���ʲô��
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
////-1 -1 255


////2
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
////1000 0000 0000 0000 0000 0000 1000 0000 ԭ��
////1111 1111 1111 1111 1111 1111 1000 0000 ����


////3
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
////%u��ӡʮ�����޷�������
////1000 0000 0000 0000 0000 0000 1000 0000 ԭ��������ͬ


////4
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//
//	return 0;
//}
//
////���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//
////10000000 00000000 00000000 000010100
////11111111 11111111 11111111 111101100 i����
////00000000 00000000 00000000 000001010 j����
////11111111 11111111 11111111 111110110 ���
////10000000 00000000 00000000 000001010 ���ս����ԭ�� -10


////5
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
////��ѭ������Ϊunsigned int ����ʼ�մ��ڵ���0��ѭ�����������


////6
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//
//// char a[-1,-2,-3,-4  ....... -127,-128,127,126,......3,2,1,0]
////strlen   ��'\0'֮ǰ���ַ�������
////���Խ��Ϊ255  (����256����Ϊ����'\0')


//7
unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	return 0;
}
//��ѭ�����޷���char�ķ�Χ0-255,ѭ�����������