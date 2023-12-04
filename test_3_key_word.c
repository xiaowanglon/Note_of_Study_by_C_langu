#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int b;
extern int add();
int main()
{
	add();
	b++;
	printf("%d\n", b);
	return 0;
}


//int a = 1;
//int add()
//{
//	
//	a++;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		add();
//		i++;
//	}
//	add();
//	return 0;
//}




















//int add()
//{
//	static int a = 1;//改变变量a的存储区域
//	a++;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		add();
//		i++;
//	}
//	add();
//	return 0;
//}



//#include <stdio.h>
//
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 0;
//	return 0;
//}