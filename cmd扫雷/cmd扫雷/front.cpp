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

	printf("�û�enter�Լ���\n");
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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Sleep(250);
			game();
			break;
		case 2:
			printf("��Ϸ����\n");
			return 0;
		default:
			printf("�������,������\n");
			break;
		}

	}

	return 0;
}