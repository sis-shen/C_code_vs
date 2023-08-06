#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void game()
{
	char ret = 'C';
	char board[Row][Col] = { 0 };
	//初始化棋盘
	InitBoard(board,Row,Col);
	DisplayBoard(board ,Row,Col);
	//下棋
	while (1)
	{
		PlayerMove(board,Row,Col);
		DisplayBoard(board, Row, Col);
		//判断胜负
		ret = IsWin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board,Row,Col);
		DisplayBoard(board, Row, Col);

		//判断胜负
		ret = IsWin(board, Row, Col);

		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == 'o')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	else
		printf("%c", ret);
}

void menu()
{
	printf("============================\n");
	printf("======== 结束游戏(0) ========\n");
	printf("======== 开始游戏(1} ========\n");
	printf("============================\n");

}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成七点
	int input = 0;
	do
	{
		menu(); //打开菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				printf("三子棋\n");
				game(); //开始游戏
				break;
			case 0 :
				printf("游戏结束\n");
				break;
			default:
				printf("输入错误\n");
				break;

		}

	} while (input != 0);
	return 0;
}