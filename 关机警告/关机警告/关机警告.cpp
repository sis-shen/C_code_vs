#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define TimeLenth 300
int main()
{
	int start = 0;
	int current = 0;
	int left = 0;
	char input[20] = { 0 };
	system("shutdown -s -t 300");//-a����ػ�,,-s�ػ�
	printf("!!!!ע��!!!!\n��ĵ��Խ���5�����ڹػ�\n�����롰���������軪�Ĺ���������ػ�\n");
	start = (int)time(NULL);
again:
	scanf("%s", input);
	current = (int)time(NULL);
	left = TimeLenth - (current - start);
	if (strcmp(input, "���������軪�Ĺ�") == 0)
	{
		system("shutdown -a");
		printf("��ʵ���������ù�");
	}
	else
	{
		system("cls");

		printf("�ٸ���һ�λ���\n");
		printf("!!!ע��!!!\n����ػ���ʣ%d��\n", left);

		goto again;
	}
	return 0;
}