#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//�ѵ��������������

// rand()��Χ 0~RAND_MAX(32767)
void guess()
{
	int cai = 0;
	//1.�������������
	int suiji = rand()%100+1; //0~RAND_MAX(32767),%100��0~99���ټ�һ:1~99
	printf("�������%d\n", suiji);

	//2.����
	while (1)
	{
		printf("������֣�");
		scanf("%d", &cai);
		if (cai < suiji)
			printf("С��\n");
		if (cai > suiji)
			printf("����\n");
		if (cai == suiji)
		{
			printf("��ȷ\n");
			break;
		}
	}
}
void menu()
{
	printf("############################\n");
	printf("######## 0 exit ############\n");
	printf("######## 1 start ###########\n");
	printf("############################\n");
}
int main()
{
	srand((unsigned int)time(NULL));// set start point,just need once
	int input = 0;
	do
	{
		menu();
		printf("please input:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�����˳�\n");
			break;
		case 1:
			guess(); //�����߼�
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	
	return 0;
}