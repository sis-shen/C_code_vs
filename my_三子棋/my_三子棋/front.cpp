#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("==========================\n");
	printf("======  ��ʼ��Ϸ(1) =======\n");
	printf("======  ������Ϸ(0) =======\n");
	printf("==========================\n");

}

void game(char board[Row][Col], int row, int col)
{
	InitBoard(board, row, col);//��ʼ������

	DisplayBoard(board, row, col);//չʾ����
	printf("����ʾ��>2(�ո�)2\n");
	char ret = CT;
	Sleep(1000);
	while (1)
	{
		PlayerMove(board, row, col);//�������
		DisplayBoard(board, row, col);
		
		Sleep(1000);
		ret = IsWin(board, Row, Col,Num);//�ж���Ӯ
		if (ret != CT)
		{
			break;
		}
		ComputerMove(board, row, col);//��������
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
		printf("���Ӯ\n");
	}
	else if (ret == CW)
	{
		printf("����Ӯ\n");
	}
	else if (ret == NW)
	{
		printf("ƽ��233\n");
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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("����Ϸ\n");
			Sleep(1000);
			system("cls");
			game(board,Row,Col);
			break;
		case 0 :
			printf("��Ϸ����\n"); 
			return 0;
		default :
			printf("�������\n");
			break;

		}
			
	} while (1);

}