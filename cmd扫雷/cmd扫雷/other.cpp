#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Menu()
{
	char cover[]  =  "=======================";
	char option1[] = "======  play (1) ======";
	char option2[] = "======  exit (2) ======"; //23
	char empty_c[] = "                       ";
	char empty_1[] = "                       ";
	char empty_2[] = "                       ";

	/*char option[] =  "                       ";*/

	int left = 0;
	int right = 22;
	while (left < right)
	{
		empty_c[left] = cover[left];
		empty_c[right] = cover[right];
		empty_1[left] = option1[left];
		empty_1[right] = option1[right];
		empty_2[left] = option2[left];
		empty_2[right] = option2[right];

		Sleep(50);
		system("cls");
		printf("%s\n%s\n%s\n%s\n",empty_c,empty_1,empty_2,empty_c);

		left++;
		right--;

	}
	if (left == right)
	{
		Sleep(50);
		system("cls");
		empty_c[left] = cover[left];
		empty_1[left] = option1[left];
		empty_2[left] = option2[left];
		printf("%s\n%s\n%s\n%s\n", empty_c, empty_1, empty_2, empty_c);

	}

}