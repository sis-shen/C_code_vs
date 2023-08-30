#include <stdio.h>
#include <memory.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>


#define DEFAULT_SIZE 3
#define INC_SIZE 2

#define Max 100 //通讯录最大人数
#define Max_Name 20 //名字长度最大值
#define Max_Sex 10 //性别最大长度
#define Max_Addr 30 //地址最大长度
#define Max_Tele 12 //电话号码最大长度



//类的声明

//人的信息
typedef struct PeoInfo
{
	char name[Max_Name];
	char sex[Max_Sex];
	char tele[Max_Tele];
	char addr[Max_Addr];
	int age;

}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;//记录存放的联系人信息
	int count;
	int capacity; //记录通讯录的容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);
//销毁通讯录
void DestroyContact(Contact* pc);
//增加联系人
void AddContact(Contact *pc);

//打印通讯录中的信息
void showContact(const Contact* pc);

//删除指定通讯录
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifiContact(Contact* pc);

//排序联系人
void SortContact(Contact* pc);

//保存通讯录信息
void SaveContact(const Contact* pc);