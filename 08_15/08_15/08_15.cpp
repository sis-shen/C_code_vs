#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int flag = 1;//假设已完成排序
//
//	for (int i = 0; i < sz; i++)
//	{
//		flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width))
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//				flag = 0;
//			}
//
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//
//
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test3()
//{
//
//}
//
//
//int main()
//{
//	test3();
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };

	int(*parr)[10] = &arr;

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(*&a));

	return 0;
}