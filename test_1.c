//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAX 6
//#include<string.h>

//int main()
//{
//  ������
//	const int s = 10;
//	s = 2;  //���ʽ�����ǿ��޸ĵ���ֵ	
//	int a[s];//���ʽ���뺬�г���ֵ
//
//	printf("s=%d\n", s);
//	return 0;
//
//}


//int main()
//{
	// ��ȷ��scanf
	//int n=0;
	//scanf("%d", &n);
	//printf("n=%d\n", n);
	//return 0;
//}


//�ַ���
//int main()
//{

	//// F10 ���� �����ַ���ĩβ�ǡ� \0 ��,���ַ����Ľ�����־
	//char arry[] = "ab  cde";
	//char arry1[] = { 'a','b', 'c', 'd', 'e'}; //����������ֵ��ĩβ�����Զ���� \0
	//char arry2[] = { 'a','b', 'c', 'd', 'e','\0'};
	//printf("arry %s\n", arry);
	//printf("arry1 %s\n", arry1);
	//printf("arry2 %s\n", arry2); //��ӡʱ���ҵ���\0����ֹ

	//// strlen() ���ַ������ȵĺ�����string length  ͷ�ļ� string.h

	//int len = strlen(arry);
	//int len1 = strlen(arry1);
	//int len2 = strlen(arry2);
	//printf("arry�ַ����ȣ�%d\n", len);
	//printf("arry1�ַ����ȣ�%d\n", len1); // û�� \0 , ����δ֪���ᾯ��
	//printf("arry2�ַ����ȣ�%d\n", len2);

	//return 0;

//}



//// ת���ַ�
//int main()
//{
//	printf("an09 \n");
//	printf("a\n09 \n");		//'\n' ����
//	printf("an\09 \n");		//'\0' ����
//    printf("\' \n");		// ' " all like this
//	printf("an\\09\n");		//"/" �ټ�б��ת��б��
//	printf("c:\\test\\test.c\n");	// print path need"/"
//	printf("\a");			//����
//	printf("%C\n", '\130');
//	printf("%C\n", '\x60');
//
//
//	return 0;
//}
 
//���� function
//��ʼ�� initialize
//���� input 
//���� process
//��� output 


//sizeof�ǵ�Ŀ������
//int main()
//{
//	int arr[5] = {0};
//
//	printf("%d\n", sizeof(arr)); //20 -���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); // 5 -����Ԫ�ظ���
//	return 0;
//}


//���渡������������Ĭ��double����
//int main()
//{
//	int a = 3.14;
//	int b = (int)3.14;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}
#include <stdio.h>

int main()

{

	printf("hello world");

	return 0;

}