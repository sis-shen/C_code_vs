#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

enum Op
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIF,
	SHOW,
	SORT,
};

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
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIF:
			ModifiContact(&con);
			break;
		case SHOW:
			showContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}