#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////把玩取地址
//int main()
//{
//	int a = 0;
//	printf("%p\n", &a);//打印a的地址
//	int* pa = &a;//pa存放a的地址，pa称为指针变量，*用于说明变量类型
//	printf("....%p\n", pa);
//	char ch = 'o';
//	char* pch = &ch;
//	printf("%p\n", pch);
//
//	char** ppch = &pch;
//	printf("%p\n", ppch);
//
//	return 0;
//}

//运用地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 256;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(char*));
//	return 0;
//}

//初识结构体
//让c语言创建新类型

//struct Book
//{
//	char name[20];
//	float price;
//	char id[33];
//};
//
//int main()
//{
//	struct Book book1 = { "my family",22.0,"18ex" };
//	printf("1：%s %f %s\n", book1.name, book1.price, book1.id);
//	struct Book* pb = &book1;
//	printf("2：%s %f %s\n", (*pb).name, (*pb).price, (*pb).id);
//	printf("3：%s %f %s\n", pb->name, pb->price, pb->id);
//	return 0;
//}

//
//int Max(int a , int b)
//{
//	int ma = a > b ? a : b;
//	return ma;
//}
//
//int main()
//{
//	int ia = 0, ib = 0;
//	scanf("%d %d", &ia, &ib);
//	int maax = Max (ia,ib );
//	printf("较大值为%d", maax);
//	return 0;
//}

////分支语句
//int test()
//{
//	if (1)
//	{
//		return 0;
//	}
//	printf("wow");
//	return 1;
//}
//
//int main()
//{
//	int a = test();
//	printf("%d", a);
//
//	return 0;
//}

////输出一百以内奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{ 
//		if ((i % 2) == 1)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	 
//	return 0;
//}

////运用switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("\a输入错误");
//		break;  
//	}
//
//	return 0;
//}

//试图报警一百次
int main()
{
	int i = 0;
	while (i < 5)
		printf("\a啊");
	return 0;
}