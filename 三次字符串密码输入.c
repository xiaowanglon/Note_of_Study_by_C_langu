#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//�Ƚ�2���ַ����Ƿ���ȣ������� ��==������Ӧʹ��һ���⺯����strcmp
//�������ֵ��0����ʾ2���ַ������
int main()
{
	char pass[] = {0};
	printf("please input your password:\n");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", pass); //����������ַ�����衰&��
		if (strcmp(pass, "abcdef") == 0)
		{
			printf("������ȷ��");
			break;
		}
		else
		{
			printf("����\n");
		}
	}
	if (3 == i)
	{
		printf("���λ�������");
	}
	return 0;
}
//int main()
//{
//	char arr[] = "abc";
//	int len = strlen(arr);//3
//	int size = sizeof(arr);//4,"\n"
//	printf("len = %d size = %d\n", len, size);
//	return 0;
//}