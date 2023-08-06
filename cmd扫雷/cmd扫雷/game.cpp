#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS],char sign)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			board[i][j] = sign;
		}
	}
}

void InitCheck(char check[ROWS][COLS])
{
	InitBoard(check, '0');
	for (int k = 0; k < COLS; k++)
	{
		check[0][k] = '1';
		check[ROWS - 1][k] = '1';
	}
	for (int i = 1; i < ROWS -1; i++)
	{
		check[i][0] = '1';
		check[i][COLS - 1] = '1';
	}
}

void DisplayBoard(char board[ROWS][COLS])
{
	for (int k = 0; k <= COL; k++)
	{
		printf("%d ", k);
	}
	printf("\n");
	for (int k = 0; k <= COL; k++)
	{
		printf("--");
	}
	printf("\n");
	for (int i = 1; i <= ROW; i++)
	{
		printf("%d|", i);
		for (int j = 1; j <= COL; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	for (int count = 0;count < EZ_RANK;)
	{
		x = rand() % ROW + 1;
		y = rand() % COL + 1;

		if (board[x][y] == Blank)
		{
			count++;
			board[x][y] = Bomb;
		}
	}
}

////调使用
//void SetMine(char board[ROWS][COLS])
//{
//	board[5][5] = Bomb;
//}

int CountMine(char board[ROWS][COLS], int x, int y)
{
	int sum = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (i != x or j != y)
			{
				if (board[i][j] == Bomb)
				{
					sum++;
				}

			}
		}
	}
	return sum;
}

void SetNum(char board[ROWS][COLS])
{
	for (int i = 1; i <= ROW; i++)
	{
		for (int j = 0; j <= COLS; j++)
		{
			if (board[i][j] == Blank)
			{
				if (CountMine(board, i, j))
				{
					board[i][j] = '0' + CountMine(board, i, j);
				}
			}
		}
	}
}

void SetFlag(char show[ROWS][COLS], int x, int y)
{
	if (show[x][y] == UN)
	{
		show[x][y] = Flag;
	}
	else if (show[x][y] == Flag)
	{
		show[x][y] = UN;
	}
	else
	{
		printf("报错\n");
	}
}

void ExpandBlank(char mine[ROWS][COLS], char show[ROWS][COLS], char check[ROWS][COLS],int x,int y)
{
	show[x][y] = mine[x][y];
	check[x][y] = '1';
	if (mine[x][y] == Blank)
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (check[i][j] == '0' && mine[i][j] != Bomb && show[i][j] != Flag)
				{
					ExpandBlank(mine, show, check, i, j);
				}
			}
		}
	}
}

int FindMine(char mine[ROWS][COLS], char show[ROW][COLS],char check[ROWS][COLS], int x, int y)
{
	if (mine[x][y] == Bomb)
	{
		DisplayBoard(mine);
		printf("炸死，游戏结束:)\n");
		return 0;
	}
	else if (mine[x][y] != Blank)
	{
		show[x][y] = mine[x][y];
		return 1;
	}
	else
	{
		ExpandBlank(mine, show, check,x,y);
		return 1;
	}
}

int CheckWin(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	int count = 0;
	for (int i = 1; i <= ROW; i++)
	{
		for (int j = 1; j <= COL; j++)
		{
			if (show[i][j] == UN or show[i][j] == Flag)
			{
				count++;
			}
		}
	}
	if (count == EZ_RANK)
	{
		printf("恭喜排雷成功!\n");
		DisplayBoard(mine);
		return 0;
	}
	else
	{
		return 1;
	}

}

void OPMine(char mine[ROWS][COLS],char show[ROWS][COLS],char check[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	int flag = 1;
	int cont = 1;
	while (cont)
	{
		system("cls");
		DisplayBoard(show);
		printf("排雷(1)\n插旗/拔旗(2)\n请输入:>");
		scanf("%d", &flag);
		
		switch (flag)
		{
		case 1:
		{
			printf("坐标格式,例>2(空格)2\n");
			printf("请输入坐标:>");
			scanf("%d %d", &x, &y);
			if (show[x][y] == Flag)
			{

				printf("此处为旗帜，不可排雷\n");
				break;
			}
			else if (show[x][y] != UN)
			{
				printf("不可重复排查\n");
				break;
			}
			cont = FindMine(mine,show,check, x, y);
			if (cont)
			{
				cont = CheckWin(mine,show);
			}
			break;
		}
		case 2:
		{
			printf("坐标格式,例>2(空格)2\n");
			printf("请输入坐标:>");
			scanf("%d %d", &x, &y);
			SetFlag(show, x, y);
			break;
		}
		default:
		{
			system("cls");
			printf("\n输入错误(恼\n");
		}
		}
	}

}
