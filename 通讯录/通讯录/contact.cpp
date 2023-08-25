#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��ʼ��ͨѶ¼

void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//������ϵ��
void AddContact(Contact* pc)
{
	if (pc->count == Max)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}

	printf("����������:>" );
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");

}

//��ӡͨѶ¼�е���Ϣ
void showContact(const Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (int i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name, 
											   pc->data[i].age, 
										       pc->data[i].sex,
										       pc->data[i].tele,
											   pc->data[i].addr);
	}
}

//����ָ������
static int FindByName(Contact* pc, char name[]) //���ڱ��ļ�ʹ��
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



//ɾ��ͨѶ¼��ָ������
void DelContact(Contact* pc)
{
	if (pc->count == 0)
	{
		return;
	}
	char name[Max_Name] = {0};
	assert(pc);
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);

	//ɾ��
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2.ɾ��(�����Ԫ�ؾ�ǰ��
	for (int i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;

	printf("ɾ���ɹ�\n");

}