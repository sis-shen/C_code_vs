#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void menu()
//{
//	printf("*************************\n");
//	printf("*******0.���� 1.�ӷ�******\n");
//	printf("*******2.���� 3�˷�*******\n");
//	printf("*******4.����     *********\n");
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
//			printf("�˳�\n");
//			break;
//		}
//		else if (1 <= input && input<= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			int ret = 0;
//			ret = parr[input](x, y);
//			printf("��Ϊ%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//
//
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	int flag = 1; //���������������

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
	struct Stu s[] = { {"����",15},{"����",32},{"����",99} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

}



int main()
{
	//test1();

	return 0;
}