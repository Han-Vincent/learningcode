﻿#define _CRT_SECURE_NO_WARNINGS 1 #include <stdio.h>    ////编写函数不允许创建临时变量，求字符串的长度。 //int lengthstr(char* str) //{ //	if (*str = '\0') //	{ //		return 0; //	} //	else //	{ //		return 1 + lengthstr(str + 1); //	} //}    //int mian() //{ //	/*char* arr = "abcdef"; //	int len = lengthstr(arr); //	printf("%d", len);*/ //	printf("asdasd"); // //	return 0; //}   //int Strlen(const char*str) //{ //	if (*str == '\0') //		return 0; //	else return 1 + Strlen(str + 1); //} //int main() //{ //	char *p = "abcdef"; //	int len = Strlen(p); //	printf("%d\n", len); //	return 0; //} // 