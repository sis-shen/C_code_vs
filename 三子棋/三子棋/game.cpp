#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//初始化棋盘
void InitBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//version 1
//void DispalyBoard(char board[Row][Col], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//打印分割行
//		if (i < row - 1)
//		{
//			printf("___|___|___\n");
//
//		}
//	}
//}

//version 2 打印棋盘
void DisplayBoard(char board[Row][Col],int row,int col)
{
	int i = 0;
	for (i=0 ;i<row;i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col;j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}

//玩家下棋
void PlayerMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}

		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[Row][Col], int row, int col)
{
	printf("电脑下棋\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;
		y = rand() % col;


		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[Row][Col], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;//棋盘满了。平局
}

char IsWin(char board[Row][Col], int row, int col)
{
	//行
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	//列
	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//对角线
	if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
	{
		return board[0][0];
	}
	if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
	{
		return board[0][2];
	}
	//平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	else
		return 'C';
}