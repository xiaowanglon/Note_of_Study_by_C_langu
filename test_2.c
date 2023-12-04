#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int b = 0;
int add()
{
	b--;
	return 0;
}



////逗号、三目、++、--、sizeof
//int main()
//
//{
//	int a = 10;
//	int b = 29;
//	int c = (a > b) ? a : b;
//	printf("c=%d\n", c);
//	int d = (c++, ++c, --c);
//	printf("d=%d\n", d);
//	int e = (d++, ++d, d--);
//	printf("d=%d\n", d);
//	printf("e=%d\n", e);
//	printf("%d\n", sizeof a); //sizeof是操作符，不是函数
//	return 0;
//
//}
//
//
//int main()
//{
//	int a = 10; //省略了auto，自动变量，出主函数作用域自动销毁
//	return 0;
//}