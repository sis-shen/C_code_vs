#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

////打印杨辉三角
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//旋转字符串中的k个字符

////version 1
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		for (int j = 0; j < len -1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}

//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);//左
//	reverse(arr + k, arr + len - 1);//右
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//
//	int num = 0;
//	
//}

//杨氏矩阵

int find_num(int arr[3][3], int* px, int *py, int k)
{
	int x = 0;
	int y = *py - 1; 
	while (x <= *px - 1 && y >= 0)
	{

		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;//找到了
		}
	}
	return 0;//找不到
}


int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int x = 3;
	int y = 3;
	int ret = find_num(arr,&x, &y, k);
	if (ret)
	{
		printf("找到了\n");
		printf("%d %d", x, y);
	}
	else {
		printf("找不到\n");
	}

	return 0;
}