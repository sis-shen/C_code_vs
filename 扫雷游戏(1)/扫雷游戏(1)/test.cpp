#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("========================\n");
	printf("===== 开始游戏（1）=====\n");
	printf("===== 结束游戏(0) ======\n");
	printf("========================\n");

}

void game()
{
	char mine[Rows][Cols] = { 0 };//存放布置好雷的信息
	char show[Rows][Cols] = { 0 };//存放已排查出雷的信息
	//初始化数组的内容
	InitBoard(mine, Rows, Cols, NonBomb);
	//未排查时显示为PlaceHolder
	InitBoard(show, Rows, Cols, PlaceHolder);

	SetMine(mine, Row, Col, Bomb);
	//展示棋盘
	DisplayBoard(mine, Row, Col);

	//排雷
	FindMine(mine, show, Row, Col);



}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			return 0;

		}
		default:
			printf("输入错误\n");
			break;
		}

		
	} while (1);
	return 0;
 }