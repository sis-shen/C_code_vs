#include <stdio.h>
#include <memory.h>
#include <assert.h>
#include <string.h>

#define Max 100 //ͨѶ¼�������
#define Max_Name 20 //���ֳ������ֵ
#define Max_Sex 10 //�Ա���󳤶�
#define Max_Addr 30 //��ַ��󳤶�
#define Max_Tele 12 //�绰������󳤶�



//�������

//�˵���Ϣ
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

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//������ϵ��
void AddContact(Contact *pc);

//��ӡͨѶ¼�е���Ϣ
void showContact(const Contact* pc);

//ɾ��ָ��ͨѶ¼
void DelContact(Contact* pc);