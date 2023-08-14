#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void menu()
//{
//	printf("*************************\n");
//	printf("*******0.结束 1.加法******\n");
//	printf("*******2.减法 3乘法*******\n");
//	printf("*******4.除法     *********\n");
//	printf("*************************\n");
//}
//
//int ADD(int x, int y) {
//	return x + y;
//}
//
//int SUB(int x, int y)
//{
//	return x - y;
//}
//
//int MUL(int x, int y)
//{
//	return x - y;
//}
//
//int DIV(int x, int y)
//{
//	return x / y;
//}
//
//int (*parr[5])(int, int) = { 0, ADD,SUB,MUL,DIV };
//
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else if (1 <= input && input<= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个整数:>");
//			scanf("%d %d", &x, &y);
//			int ret = 0;
//			ret = parr[input](x, y);
//			printf("答案为%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//
//
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	int flag = 1; //假设数组完成排序

	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}


void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

int cmp_stu_by_name(const void* e1,const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, (((struct Stu*)e2)->name));
}

struct Stu
{
	char name[20];
	int age;
};

void test2()
{
	struct Stu s[] = { {"张三",15},{"李四",32},{"王五",99} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

}



int main()
{
	//test1();

	return 0;
}