#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int b = 0;
int add()
{
	b--;
	return 0;
}



////���š���Ŀ��++��--��sizeof
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
//	printf("%d\n", sizeof a); //sizeof�ǲ����������Ǻ���
//	return 0;
//
//}
//
//
//int main()
//{
//	int a = 10; //ʡ����auto���Զ����������������������Զ�����
//	return 0;
//}