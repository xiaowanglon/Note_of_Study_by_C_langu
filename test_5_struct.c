#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Students
{
	//��Ա
	char name[5];
	int age;
	char sex[5];
	char tel[12];
};

//use point ����
void print(struct Students* p)
{
	printf("%s %d %s %s\n", (*p).name, (*p).age, (*p).sex, (*p).tel);//���������

	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->tel);//��->���ṹ��ָ�����->��Ա��
}

int main()
{
	struct Students stu = { "ling",18,"Ů","18119642419" };
	printf("%s %d %s %s\n", stu.name, stu.age, stu.sex, stu.tel);
	print(&stu);
	return 0;
}