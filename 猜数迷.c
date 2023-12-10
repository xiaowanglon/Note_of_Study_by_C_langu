#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//难点在于生成随机数

// rand()范围 0~RAND_MAX(32767)
void guess()
{
	int cai = 0;
	//1.电脑生成随机数
	int suiji = rand()%100+1; //0~RAND_MAX(32767),%100后0~99，再加一:1~99
	printf("随机数：%d\n", suiji);

	//2.猜数
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &cai);
		if (cai < suiji)
			printf("小了\n");
		if (cai > suiji)
			printf("大了\n");
		if (cai == suiji)
		{
			printf("正确\n");
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
			printf("正在退出\n");
			break;
		case 1:
			guess(); //猜谜逻辑
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	
	return 0;
}