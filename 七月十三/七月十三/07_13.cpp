#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ģ���û���¼����

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", password);
//		//if (password = "123456") �������ڱȽ��ַ���
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��¼ʧ��");
//	}
//	return 0;
//}

//�Ӵ�С���������
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("������������:>");
	scanf("%d %d %d",&a, &b, &c);
	if (a < b)
	{
		int tmp = 0;
		tmp = a;
		a = b;
		b = tmp;
	}

	if (a < c)
	{
		int tmp = a;
		tmp = a;
		a = c;
		c = tmp;
	}

	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d >%d > %d", a, b, c);
	return 0;
}

