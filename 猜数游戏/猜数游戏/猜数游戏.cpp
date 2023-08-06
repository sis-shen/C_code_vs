#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("==============================\n");
	Sleep(500);
	printf("===========1.paly  ===========\n");
	Sleep(500);
	printf("===========2.exit  ===========\n");
	Sleep(500);
	printf("==============================\n");
	Sleep(500);

}

void game()//猜数字游戏的实践
{
	

	int key = rand() % 100 + 1;

	//key%100的范围是0~9再加一，1~100
	//猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > key)
		{
			printf("猜大了\n");
		}
		else if (guess < key)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("\a猜对了!\n\n");
			Sleep(1000);
			break;
		}
	}

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("猜数字\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重试");
			break;
		}

	} while (input != 0);
	return 0;
}