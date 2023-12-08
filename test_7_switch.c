#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	/*scanf("%d", &x);*/
//	scanf("%d", &x);
//	switch (x)
//	{
//	case 1:
//		printf("执行1\n");
//		break;
//	case 2:
//		printf("执行2\n");
//		break;
//	case 3:
//		switch (2)
//		{
//		case 1:
//			printf("haha\n");
//			break;
//		case 2:
//			printf("jjj\n");
//			break;
//		}
//	case 4:
//		printf("执行4\n");
//		//break;
//	case 5:
//		printf("执行5\n");
//		break;
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int x = 0;
	/*scanf("%d", &x);*/
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		printf("执行1\n");
		break;
	case 2:
		printf("执行2\n");
		break;
	case 3:
		printf("执行3\n");
		printf("执行3\n");
		//对照项
	case 4:
		printf("执行4\n");
		break;
	case 5:
		printf("执行5\n");
		break;
	}
	return 0;
}