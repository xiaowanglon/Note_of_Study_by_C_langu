//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAX 6
//#include<string.h>

//int main()
//{
//  错误案例
//	const int s = 10;
//	s = 2;  //表达式必须是可修改的左值	
//	int a[s];//表达式必须含有常量值
//
//	printf("s=%d\n", s);
//	return 0;
//
//}


//int main()
//{
	// 正确的scanf
	//int n=0;
	//scanf("%d", &n);
	//printf("n=%d\n", n);
	//return 0;
//}


//字符串
//int main()
//{

	//// F10 监视 发现字符串末尾是‘ \0 ’,是字符串的结束标志
	//char arry[] = "ab  cde";
	//char arry1[] = { 'a','b', 'c', 'd', 'e'}; //中括号内无值，末尾不会自动添加 \0
	//char arry2[] = { 'a','b', 'c', 'd', 'e','\0'};
	//printf("arry %s\n", arry);
	//printf("arry1 %s\n", arry1);
	//printf("arry2 %s\n", arry2); //打印时，找到‘\0’截止

	//// strlen() 求字符串长度的函数，string length  头文件 string.h

	//int len = strlen(arry);
	//int len1 = strlen(arry1);
	//int len2 = strlen(arry2);
	//printf("arry字符长度：%d\n", len);
	//printf("arry1字符长度：%d\n", len1); // 没有 \0 , 长度未知，会警告
	//printf("arry2字符长度：%d\n", len2);

	//return 0;

//}



//// 转义字符
//int main()
//{
//	printf("an09 \n");
//	printf("a\n09 \n");		//'\n' 换行
//	printf("an\09 \n");		//'\0' 结束
//    printf("\' \n");		// ' " all like this
//	printf("an\\09\n");		//"/" 再加斜杠转义斜杠
//	printf("c:\\test\\test.c\n");	// print path need"/"
//	printf("\a");			//蜂鸣
//	printf("%C\n", '\130');
//	printf("%C\n", '\x60');
//
//
//	return 0;
//}
 
//功能 function
//初始化 initialize
//输入 input 
//处理 process
//输出 output 


//sizeof是单目操作符
//int main()
//{
//	int arr[5] = {0};
//
//	printf("%d\n", sizeof(arr)); //20 -计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); // 5 -数组元素个数
//	return 0;
//}


//字面浮点数，编译器默认double类型
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