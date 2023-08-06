#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%f", Pow(n, k));
//	return 0;
//}
//
//int main()
//{
//	char chh[10] = { 0 };
//	char chr[] = { 'a','b' };
//	printf("%s", chr);
//	return 0;
//}

//二维数组
//1 2 3 4
//5 6 7 8
//9 10 11 12


//
//void bubble_sort(int* aa, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
// 		
//		for (int j = 0; j <(sz - i - 1); j++)
//		{
//			if (aa[j] < aa[j + 1])
//			{
//				int tmp = aa[j];
//				aa[j] = aa[j + 1];
//				aa[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//数组名表示首元素地址
//但有两个例外
//1.sizeof(arr) 表示整个数组
//2.&arr arr表示整个数组，取出了整个数组的地址
int main()
{
	int arr[10];

	return 0;
}