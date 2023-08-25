#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化通讯录

void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//增加联系人
void AddContact(Contact* pc)
{
	if (pc->count == Max)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}

	printf("请输入名字:>" );
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功\n");

}

//打印通讯录中的信息
void showContact(const Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name, 
											   pc->data[i].age, 
										       pc->data[i].sex,
										       pc->data[i].tele,
											   pc->data[i].addr);
	}
}

//查找指定名字
static int FindByName(Contact* pc, char name[]) //仅在本文件使用
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
}



//删除通讯录中指定人类
void DelContact(Contact* pc)
{
	if (pc->count == 0)
	{
		return;
	}
	char name[Max_Name] = {0};
	assert(pc);
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);

	//删除
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除(后面的元素均前移
	for (int i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;

	printf("删除成功\n");

}