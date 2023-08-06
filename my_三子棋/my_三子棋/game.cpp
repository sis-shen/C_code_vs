#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ������
void InitBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = PlaceHolder;
		}
	}
}

//չʾ����
void DisplayBoard(char board[Row][Col], int row ,int col)
{
	printf(" ");
	for (int k = 1; k < col + 1;k++)//��ӡ������
	{
		printf(" %d ", k);
		if (k < col)
		{
			printf("|");
		}
	}
	printf("\n");

	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf("%d", i + 1);
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		printf("-");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
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
}

//�������
void PlayerMove(char board[Row][Col], int row, int col)
{
	printf("�������\n");
	while (1)
	{
		printf("����������:>");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (x > 0 && x < col + 1 && y>0 && y < row + 1)
		{
			if (board[x-1][y-1] == PlaceHolder)
			{
				board[x-1][y-1] = PlayerMark;
				break;
			}
			else
			{
				printf("�������ѱ�ռ�ã�������\n");
			}
		}
		else
		{
			printf("����Ƿ�����\n");
		}
		
	}
	system("cls");
	printf("�������\n\n");
}

void ComputerMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == PlaceHolder)
		{
			board[x][y] = ComputerMark;
			break;
		}
	}
	system("cls");
	printf("��������\n\n");
}

int IsFull(char board[Row][Col], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == PlaceHolder)
			{
				return 0;//û����
			}
		}
	}
	return 1; //����
}

char SomeoneWin(char board[Row][Col], int row, int col,int num, char winner)
{
	//��
	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col - (num - 1); j++)
		{
			int tmp = true;
			for (int k = 0; k < num - 1; k++)
			{
				tmp = (board[i][j + k] == board[i][j + k + 1] && tmp);
			}
			if (board[i][j] == winner && tmp)
			{
				return winner;
			}
		}
	}
	//��
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row - (num - 1); i++)
		{
			int tmp = true;
			for (int k = 0; k < num - 1;k++)
			{
				tmp = (board[i+k][j] == board[i+k+1][j] && tmp);
			}
			if (board[i][j] == winner && tmp)
			{
				return winner;
			}
		}
	}
	//����б��
	for (int i = 0; i < row - (num -1); i++)
	{
		for (int j = 0; j < col - (num - 1 ); j++)
		{
			int tmp = true;
			for (int k = 0; k < num - 1; k++)
			{
				tmp = (board[i + k][j+k] == board[i + k + 1][j+k+1] && tmp);
			}
			if (board[i][j] == winner && tmp )
			{
				return winner;
			}
		}
	}
	//����б��
	for (int i = num -1; i < row; i++)
	{
		for (int j = 0; j < col - (num-1); j++)
		{
			int tmp = true;
			for (int k = 0; k < num - 1; k++)
			{
				tmp = board[i - k][j + k] == board[i - k - 1][j + k + 1] && tmp;
			}
			if (board[i][j] == winner && tmp)
			{
				return winner;
			}
		}
	}
	return CT;
}

char IsWin(char board[Row][Col], int row, int col,int num)
{
	//���Ӯ
	if (SomeoneWin(board, row, col, num,PW)==PW)
	{
		return PW;
	}
	if (SomeoneWin(board, row, col, num,CW) == CW)
	{
		return CW;
	}
	if (IsFull(board, row, col))
	{
		return NW;
	}
	else
	{
		return CT;
	}

}