#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//比较2个字符串是否相等，不能用 ‘==’，而应使用一个库函数：strcmp
//如果返回值是0，表示2个字符串相等
int main()
{
	char pass[] = {0};
	printf("please input your password:\n");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", pass); //数组名即地址，无需“&”
		if (strcmp(pass, "abcdef") == 0)
		{
			printf("密码正确！");
			break;
		}
		else
		{
			printf("错误\n");
		}
	}
	if (3 == i)
	{
		printf("三次机会用完");
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