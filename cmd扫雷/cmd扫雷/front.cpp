#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	char check[ROWS][COLS] = { 0 };
	InitBoard(mine, Blank);
	InitBoard(show, UN);
	InitCheck(check);

	SetMine(mine);
	SetNum(mine);

	//DisplayBoard(mine);
	//DisplayBoard(show);

	OPMine(mine,show, check);

	printf("敲击enter以继续\n");
	getchar();
	getchar();

	//SetMineNum(mine);

}




int main()
{
	srand((unsigned int)time(NULL));


	while (1)
	{
		int input = 0;
		Menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Sleep(250);
			game();
			break;
		case 2:
			printf("游戏结束\n");
			return 0;
		default:
			printf("输入错误,请重试\n");
			break;
		}

	}

	return 0;
}