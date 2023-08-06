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
	system("shutdown -s -t 300");//-a解除关机,,-s关机
	printf("!!!!注意!!!!\n你的电脑将在5分钟内关机\n请输入“我是神里凌华的狗”来解除关机\n");
	start = (int)time(NULL);
again:
	scanf("%s", input);
	current = (int)time(NULL);
	left = TimeLenth - (current - start);
	if (strcmp(input, "我是神里凌华的狗") == 0)
	{
		system("shutdown -a");
		printf("其实作者在玩烂梗");
	}
	else
	{
		system("cls");

		printf("再给你一次机会\n");
		printf("!!!注意!!!\n距离关机还剩%d秒\n", left);

		goto again;
	}
	return 0;
}