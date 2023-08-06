#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[Rows][Cols], int rows, int cols,char sign)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = sign;
		}
	}
}

void DisplayBoard(char board[Rows][Cols], int row, int col)
{
	for (int i = 1; i <= row; i++)
	{
		printf("%d|", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("  ");
	for (int j = 1; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
}

void SetMine(char board[Rows][Cols], int row, int col, char bomb)
{
	int count = EASY_COUNT;
	while (count)//ѭ���������̶������Բ��ʺ���for
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;

		if (board[x][y] == NonBomb)
		{
			board[x][y] = bomb;
			count--;
		}
	}
}

int get_mine_count(char mine[Rows][Cols], int x, int y)
{
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1;j++)
		{
			count += mine[i][j];
		}
	}
	return (count - 9 * '0');
}


void FindMine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win <row *col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != PlaceHolder)
			{
				printf("�����ظ��Ų飬������\n");
				continue;
			}
			if (mine[x][y] == Bomb)
			{
				printf("��ը����Ӵ������\n");
				DisplayBoard(mine, Row, Col);
				break;
			}
			else
			{
				win++;
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, Row, Col);
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}

	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ���׳ɹ�\n");
		DisplayBoard(mine, Row, Col);
	}

}
