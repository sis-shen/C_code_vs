#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
	double score;
};

void set_stu(struct Stu* ps)
{
	/*strcpy((*ps).name, "zhangsan");
	(*ps).age = 20;
	(*ps).score = 250.0;*/

	strcpy(ps->name, "����");//ͨ���ṹ��ָ���ҵ���Ա
	ps->age = 20;
	ps->score = 250.5;
};

void print_stu(struct Stu *ps)
{
	printf("%s\n%d\n%lf", ps->name, ps->age,ps->score);
}


int main()
{
	struct Stu s = { 0 };
	set_stu(&s);
	print_stu(&s);

}