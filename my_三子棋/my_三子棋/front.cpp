#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("==========================\n");
	printf("======  开始游戏(1) =======\n");
	printf("======  结束游戏(0) =======\n");
	printf("==========================\n");

}

void game(char board[Row][Col], int row, int col)
{
	InitBoard(board, row, col);//初始化棋盘

	DisplayBoard(board, row, col);//展示棋盘
	printf("坐标示例>2(空格)2\n");
	char ret = CT;
	Sleep(1000);
	while (1)
	{
		PlayerMove(board, row, col);//玩家下棋
		DisplayBoard(board, row, col);
		
		Sleep(1000);
		ret = IsWin(board, Row, Col,Num);//判断输赢
		if (ret != CT)
		{
			break;
		}
		ComputerMove(board, row, col);//电脑下棋
		DisplayBoard(board, row, col);
		Sleep(1000);
		ret = IsWin(board, Row, Col,Num);
		if (ret != CT)
		{
			break;
		}

	}
	if (ret == PW)
	{
		printf("玩家赢\n");
	}
	else if (ret == CW)
	{
		printf("电脑赢\n");
	}
	else if (ret == NW)
	{
		printf("平局233\n");
	}
	else
	{
		printf("??????\n");
	}

}





int main()
{
	char board[Row][Col] = { 0 };
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("玩游戏\n");
			Sleep(1000);
			system("cls");
			game(board,Row,Col);
			break;
		case 0 :
			printf("游戏结束\n"); 
			return 0;
		default :
			printf("输入错误\n");
			break;

		}
			
	} while (1);

}