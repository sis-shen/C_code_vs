#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("========================\n");
	printf("===== ��ʼ��Ϸ��1��=====\n");
	printf("===== ������Ϸ(0) ======\n");
	printf("========================\n");

}

void game()
{
	char mine[Rows][Cols] = { 0 };//��Ų��ú��׵���Ϣ
	char show[Rows][Cols] = { 0 };//������Ų���׵���Ϣ
	//��ʼ�����������
	InitBoard(mine, Rows, Cols, NonBomb);
	//δ�Ų�ʱ��ʾΪPlaceHolder
	InitBoard(show, Rows, Cols, PlaceHolder);

	SetMine(mine, Row, Col, Bomb);
	//չʾ����
	DisplayBoard(mine, Row, Col);

	//����
	FindMine(mine, show, Row, Col);



}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳���Ϸ\n");
			return 0;

		}
		default:
			printf("�������\n");
			break;
		}

		
	} while (1);
	return 0;
 }