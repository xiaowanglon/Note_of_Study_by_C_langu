#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()

{
	int h = 1;
	int l = 1;	//行数列数初始化
	do
	{
		l = 1;
		do
		{
			printf("%d * %d = %2d   ", l, h, h * l);	//%2d两位数空格，一位数会空格以对齐
			l++;
		} while (l <= h);
		h++;
		printf("\n");
	}while (h <= 9);
	return 0;
}















//int main()
//
//{
//	int h = 1;
//	int l = 1;	//行数列数初始化
//	while( h<=9 )
//	{
//		l = 1;	//确保每次行数循环开始，列数从一开始
//		while (l <= h)	// 第几行有对应列数
//		{
//			printf("%d * %d = %2d   ", l, h, h * l);	//%2d两位数空格，一位数会空格以对齐
//			l++;
//		}
//		h++;
//		printf("\n");	//行数循环每次结束换行
//	}
//	return 0;
//}



//int main()
//
//{
//	int h = 1;
//	int l = 1;	//行数列数初始化
//	for (h = 1; 9 >= h; h++)
//	{
//		for (l = 1; l <= h; l++)	// 第几行有对应列数
//			printf("%d * %d = %2d   ", l, h, h * l);	//%2d两位数空格，一位数会空格以对齐
//		printf("\n");	//行数循环每次结束换行
//	}
//	return 0;
//}
//













//int main()
//{
//	printf("	# #				\n");
//	printf("####################\n");
//	printf("####################\n");
//	printf("	# #				\n");
//	return 0;
//}

//int main()
//
//{
//	int input = 0;
//	int y = 0;
//	printf("please input x(-1000<x<1000): ");
//	scanf("%d", &input);
//	if (input < 0)
//		y =1;
//	else if (input == 0)
//		y= 0;
//	else
//		y= -1;
//	printf("y=%d\n", y);
//	return 0;
//}