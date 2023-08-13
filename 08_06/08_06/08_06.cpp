#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right && left<sz && right>=0)
//	{
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move_odd_even(arr, sz);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,7,9,22 };
//	int arr2[] = { 2,8,10,17,33,44 };
//
//	int* i = arr1;
//	int* j = arr2;
//
//	int arr[11] = { 0 };
//
//	for (int k = 0; k < 11; k++)
//	{
//		if ((*i < *j && i<arr1+5) || j == arr2+6)
//		{
//			arr[k] = *i;
//			i++;
//		}
//		else
//		{
//			arr[k] = *j;
//			j++;
//		}
//
//	}
//	for (int a = 0; a < 11; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}

int main()
{
	char* arr[5] = { 0 };
	char* (*pa)[5] = &arr;
	char a = 'w';
	char(*p) = &a;
	char* (*q) = &p;

	return 0;
}