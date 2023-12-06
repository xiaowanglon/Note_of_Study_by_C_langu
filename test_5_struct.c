#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Students
{
	//成员
	char name[5];
	int age;
	char sex[5];
	char tel[12];
};

//use point 传参
void print(struct Students* p)
{
	printf("%s %d %s %s\n", (*p).name, (*p).age, (*p).sex, (*p).tel);//必须带（）

	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->tel);//“->”结构体指针变量->成员名
}

int main()
{
	struct Students stu = { "ling",18,"女","18119642419" };
	printf("%s %d %s %s\n", stu.name, stu.age, stu.sex, stu.tel);
	print(&stu);
	return 0;
}