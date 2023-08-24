#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int is_left_move(char arr[], char arr2[])
//{
//	
//	int len = strlen(arr);
//	int len2 = strlen(arr2);
//	if (len != len2) {
//		return 0;
//	}
//	strncat(arr, arr, len);
//	char* ret = strstr(arr, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	//abcdef
//	//bcdefa
//	//cdefab
//	char arr2[] = "cdeab";
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int num = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		for ( j = 0; j < m; j++)
//		{
//			scanf(" %d ", &arr[i][j]);
//
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[50] = { 0 };
//	int flag1 = 0;
//	int flag2 = 0;
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d", &(arr[i]));
//		if (i >= 1)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else if(arr[i] < arr[i-1])
//			{
//				flag2 = 1;
//			}
//			else
//			{
//				;
//			}
//		}
//
//	}
//
//	if (flag1 + flag2 <= 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted");
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//}s1,s2,a[20],*p;
//
//struct Node {
//	int date;
//	struct Node* next;
//};
//
//struct Point {
//	int x;
//	int y;
//
//}p1 = {1,1};
//
//int main()
//{
//	struct Stu s3 = { "ÕÅÈı",256};
//	printf("%d", s3.age);
//	return 0;
//}


struct S1 {
	char c1;
	int i;
	char c2;
};

struct S2 {
	char c1;
	char c2;
	int i;
};

int main()
{
	struct S1 s1;
	struct S2 s2;
	printf("%d", sizeof(s1));

}