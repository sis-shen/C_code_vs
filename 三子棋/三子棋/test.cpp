#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void game()
{
	char ret = 'C';
	char board[Row][Col] = { 0 };
	//��ʼ������
	InitBoard(board,Row,Col);
	DisplayBoard(board ,Row,Col);
	//����
	while (1)
	{
		PlayerMove(board,Row,Col);
		DisplayBoard(board, Row, Col);
		//�ж�ʤ��
		ret = IsWin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board,Row,Col);
		DisplayBoard(board, Row, Col);

		//�ж�ʤ��
		ret = IsWin(board, Row, Col);

		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == 'o')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	else
		printf("%c", ret);
}

void menu()
{
	printf("============================\n");
	printf("======== ������Ϸ(0) ========\n");
	printf("======== ��ʼ��Ϸ(1} ========\n");
	printf("============================\n");

}

int main()
{
	srand((unsigned int)time(NULL));//����������������ߵ�
	int input = 0;
	do
	{
		menu(); //�򿪲˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				printf("������\n");
				game(); //��ʼ��Ϸ
				break;
			case 0 :
				printf("��Ϸ����\n");
				break;
			default:
				printf("�������\n");
				break;

		}

	} while (input != 0);
	return 0;
}