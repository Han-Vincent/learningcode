#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	//�ؼ���sizeof 
	//sizeof ������Ǳ���/����ռ�ռ�Ĵ�С����λ���ֽ�
	int arr[10] = {0};
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a );
  //printf("%d\n", sizeof int ); (error)

	printf("%d\n", sizeof(arr));

	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
	//����������ÿ��Ԫ�ص�����������ͬ
	//�����ã�������ռ�ռ��ܴ�С��/����һ������Ԫ�صĴ�С���Ӷ���ã�����Ԫ�صĸ�����


	return 0;

}