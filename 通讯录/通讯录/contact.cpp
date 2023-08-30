#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��ʼ��ͨѶ¼
//1.��̬�汾
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
		printf("���ݳɹ�\n");    //������
	}

}

//������ϵ��
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



//2.��̬�汾
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

//����ͨѶ¼
void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;

}

//������ϵ��-��̬
//void AddContact(Contact* pc)
//{
//	if (pc->count == Max)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//
//	printf("����������:>" );
//	scanf("%s", pc->data[pc->count].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("���ӳɹ�\n");
//
//}




//������ϵ��-��̬
void AddContact(Contact* pc)
{
	assert(pc);
	CheckContact(pc);

	printf("����������:>");
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
	return -1;
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

//����ָ������
void SearchContact(Contact* pc)
{
	assert(pc);
	char name[Max_Name];
	printf("����������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("����ϵ�˲�����\n");
		return;
	}

	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
}

//�޸�ָ����ϵ��
void ModifiContact(Contact* pc)
{
	assert(pc);
	char name[Max_Name];
	printf("����������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("����ϵ�˲�����\n");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�\n");
}

//�Ƚ�����
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}



//������ϵ�ˣ�������
void SortContact(Contact* pc)
{
	assert(pc);
	printf("%d", pc->count);
	qsort(pc->data,pc->count,sizeof(PeoInfo),cmp_peo_by_name);
	printf("����ɹ�\n");
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