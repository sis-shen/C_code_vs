#include <stdio.h>
#include <memory.h>
#include <assert.h>
#include <string.h>

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
	PeoInfo data[100];
	int count;
}Contact;

//初始化通讯录
void InitContact(Contact* pc);
//增加联系人
void AddContact(Contact *pc);

//打印通讯录中的信息
void showContact(const Contact* pc);

//删除指定通讯录
void DelContact(Contact* pc);