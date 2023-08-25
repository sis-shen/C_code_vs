#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("==============================================\n");
	printf("=====    1.add               2.del   =========\n");
	printf("=====    3.search            4.modif =========\n");
	printf("=====    5.show               6.sort =========\n");
	printf("=====    0.exit                      =========\n");
	printf("==============================================\n");
}


int main()
{
	int input = 0;
	Contact con;//创建一个通讯录
	//初始化通讯录
	InitContact(&con);
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			showContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}