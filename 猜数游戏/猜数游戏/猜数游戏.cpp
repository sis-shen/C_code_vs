#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("==============================\n");
	Sleep(500);
	printf("===========1.paly  ===========\n");
	Sleep(500);
	printf("===========2.exit  ===========\n");
	Sleep(500);
	printf("==============================\n");
	Sleep(500);

}

void game()//��������Ϸ��ʵ��
{
	

	int key = rand() % 100 + 1;

	//key%100�ķ�Χ��0~9�ټ�һ��1~100
	//������
	int guess = 0;
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > key)
		{
			printf("�´���\n");
		}
		else if (guess < key)
		{
			printf("��С��\n");
		}
		else
		{
			printf("\a�¶���!\n\n");
			Sleep(1000);
			break;
		}
	}

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������");
			break;
		}

	} while (input != 0);
	return 0;
}