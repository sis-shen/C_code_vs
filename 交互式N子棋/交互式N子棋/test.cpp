#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"




void game()
{
	printf("van��Ϸ");
}

int main()
{
	int PlayerWin = 0;
	int ComputerWin = 0;

	
	while (1)
	{
		menu();
		printf("������:>");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
		{
			game();
			break;
		}
		case 2:
		{
			printf("��Ϸ����\n");
			printf("���Ӯ�� %d �� \n����Ӯ�� %d ��",PlayerWin, ComputerWin);
			return 0;
		}
		default:
		{
			printf("����������������\n");
		}
		}
	}
}