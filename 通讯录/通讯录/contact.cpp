#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化通讯录
//1.静态版本
//void InitContact(Contact* pc)
//{
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}


void CheckContact(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SIZE) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		pc->data = ptr;
		pc->capacity += INC_SIZE;
		printf("增容成功\n");    //调试用
	}

}

//载入联系人
void LoadContact(Contact* pc)
{
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };

	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
	{
		CheckContact(pc);
		pc->data[pc->count] = tmp;
		pc->count++;

	}

	fclose(pfRead);
	pfRead = NULL;00
	
}



//2.动态版本
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(DEFAULT_SIZE ,sizeof( PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULT_SIZE;
	LoadContact(pc);
}

//销毁通讯录
void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;

}

//增加联系人-静态
//void AddContact(Contact* pc)
//{
//	if (pc->count == Max)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//
//	printf("请输入名字:>" );
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("增加成功\n");
//
//}




//增加联系人-动态
void AddContact(Contact* pc)
{
	assert(pc);
	CheckContact(pc);

	printf("请输入名字:>");
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
	return -1;
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

//查找指定名字
void SearchContact(Contact* pc)
{
	assert(pc);
	char name[Max_Name];
	printf("请输入名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("该联系人不存在\n");
		return;
	}

	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
}

//修改指定联系人
void ModifiContact(Contact* pc)
{
	assert(pc);
	char name[Max_Name];
	printf("请输入名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("该联系人不存在\n");
		return;
	}

	printf("请输入名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功\n");
}

//比较人名
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}



//排序联系人（按名字
void SortContact(Contact* pc)
{
	assert(pc);
	printf("%d", pc->count);
	qsort(pc->data,pc->count,sizeof(PeoInfo),cmp_peo_by_name);
	printf("排序成功\n");
}


void SaveContact(const Contact* pc)
{
	assert(pc);
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("fopen:");
		return;
	}

	for (int i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
}