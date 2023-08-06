#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"




void game()
{
	printf("van游戏");
}

int main()
{
	int PlayerWin = 0;
	int ComputerWin = 0;

	
	while (1)
	{
		menu();
		printf("请输入:>");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
		{
			game();
			break;
		}
		case 2:
		{
			printf("游戏结束\n");
			printf("玩家赢了 %d 局 \n电脑赢了 %d 局",PlayerWin, ComputerWin);
			return 0;
		}
		default:
		{
			printf("输入错误，青葱新输入\n");
		}
		}
	}
}