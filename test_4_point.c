#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 10;//���ڴ�����4���ֽڴ洢10
	&a;//"&"ȡ��ַ��������ȡ�׵�ַ
	printf("%p\n", &a);//16����չ�֣�ÿ�����г�������������´����������ĵ�ַҲ���
	int* p = &a;
	return 0;
}


//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڴ洢10
//	&a;//"&"ȡ��ַ��������ȡ�׵�ַ
//	printf("%p\n", &a);//16����չ�֣�ÿ�����г�������������´����������ĵ�ַҲ���
//	int* p = &a;
//	
//	//p����ָ�����
//	//������p����������int*
//	//'*'˵��p��ָ�����
//	//int˵��pָ��Ķ���a������int����
//	//��*�������ò�����
//
//	printf("�޸�ǰ��%d\n", a);
//	*p=20;//����Ҫ��"*",ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ����޸��������޸ı���a��ֵ
//	//&a = 30; //������������ʽ�����ǿ��޸ĵ���ֵ
//	printf("�޸ĺ�%d\n", a);
//
//	// int q = &a;//�����棺��int���롰int * ���ļ�Ӽ���ͬ
//
//	
//	//ָ������Ĵ�С����
//	//32λ��%zd��64λ��%zu
//	printf("%zd\n", sizeof (char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	//����ʲô���͵�ָ�룬�����ڴ���ָ�������ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//x86:32λ������32bitλ����4byte������ָ������Ĵ�С��4���ֽ�
//	//x64:64λ������64bitλ����8byte������ָ������Ĵ�С��8���ֽ�
//	return 0;
//}