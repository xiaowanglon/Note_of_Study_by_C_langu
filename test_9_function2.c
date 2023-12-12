#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////函数声明
//int add(int x, int y);

#include "add.h"
int main()
{
	int a = 1;
	int b = 10;
	printf("%d\n", add(a, b));
	return 0;
}

////函数定义
//int add(int x, int y)
//{
//	return x + y;
//}