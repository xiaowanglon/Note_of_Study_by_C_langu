#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()

{
	int h = 1;
	int l = 1;	//����������ʼ��
	do
	{
		l = 1;
		do
		{
			printf("%d * %d = %2d   ", l, h, h * l);	//%2d��λ���ո�һλ����ո��Զ���
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
//	int l = 1;	//����������ʼ��
//	while( h<=9 )
//	{
//		l = 1;	//ȷ��ÿ������ѭ����ʼ��������һ��ʼ
//		while (l <= h)	// �ڼ����ж�Ӧ����
//		{
//			printf("%d * %d = %2d   ", l, h, h * l);	//%2d��λ���ո�һλ����ո��Զ���
//			l++;
//		}
//		h++;
//		printf("\n");	//����ѭ��ÿ�ν�������
//	}
//	return 0;
//}



//int main()
//
//{
//	int h = 1;
//	int l = 1;	//����������ʼ��
//	for (h = 1; 9 >= h; h++)
//	{
//		for (l = 1; l <= h; l++)	// �ڼ����ж�Ӧ����
//			printf("%d * %d = %2d   ", l, h, h * l);	//%2d��λ���ո�һλ����ո��Զ���
//		printf("\n");	//����ѭ��ÿ�ν�������
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