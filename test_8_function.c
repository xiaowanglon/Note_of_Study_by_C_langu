#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("x=%d,y=%d\n", x, y);
//}
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
	printf("*px=%d,*py=%d\n", *px, *py);
}

int main()
{
	int a = 1;
	int b = 10;
	/*swap(a, b);*/
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}



//int max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//void print()
//{
//	printf("void 无返回类型函数");
//}
//int main()
//{
//	int a = 19;
//	int b = 29;
//	scanf("%d %d", &a, &b);
//	int bigger = max(a, b);
//	printf("%d\n", bigger);
//	print();
//	return 0;
//}