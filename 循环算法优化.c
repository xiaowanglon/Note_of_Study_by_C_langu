#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// practice： 1!+2!+...+10!

// 一般算法：双层循环，外层1~10，内层计算每个数的阶乘，在外层把阶乘相加

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int jc = 1;
//
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		jc = 1;//
//		for (j = 1; j <= i; j++)
//		{
//			jc = jc * j;
//		}
//		sum = sum + jc;
//	}
//	printf("%d %d\n", jc,sum);
//	return 0;
//}

////算法优化：1~10递增，其阶乘比上一个多乘一个，在这过程中相加，一层循环即可。
//int main()
//{
//	int i = 0;
//	int jc = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		jc = jc * i;
//		sum = sum + jc;
//	}
//	printf("%d %d\n", jc, sum);
//	return 0;
//}



// 练习2：有序数组查找， 报数，在数组中查找，输出其下标.

////一般算法：遍历数组，if条件判断输出。
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	int len = sizeof(arr) / sizeof(arr[0]);  //求出数组长度
//	printf("%d\n", sizeof(arr));
//	printf("len=%d\n", len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (input == arr[i])
//		{
//			
//			printf("找到了，下标为：%d\n", i);
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("i=%d\n",i);
//		printf("out of this area");
//	}
//		
//	return 0;
//}


//未能利用 “有序” 这个条件
//算法优化：一层循环用 二分法 折半查找。每次查找少一半数据

int main()
{
	int input = 0;
	scanf("%d", &input);
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int len = sizeof(arr) / sizeof(arr[0]);  //求出数组长度
	printf("%d\n", sizeof(arr));
	printf("len=%d\n", len);
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;	//此写法避免left和right数值过大求平均值出错
		if (arr[mid] < input)
		{
			left = mid + 1;
		}
		if (arr[mid] > input)
		{
			right = mid - 1;
		}
		if (input == arr[mid])
		{
			printf("找到了，下标为：%d\n", mid);
			break;
		}

	}
	if (left > right)
		printf("out of this area");
	return 0;
}