#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////使用getchar和putchar
//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", password);//拿走缓冲区中的password
//	printf("请确认密码(Y/N)\n");
//	
//	int tmp = 0;
//	while (( tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("密码确认成功");
//	}
//	else
//	{
//		printf("密码确认失败");
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

////使用for循环
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

////使用do while
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//
//}

////计算n的阶乘
//int main()
//{
//	printf("请输入n的值:");
//	int n_value = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (n ; n > 0; n--)
//	{
//		n_value = n_value * n;
//	}
//	printf("结果为%d", n_value);
//	return 0;
//}

////1~10的阶乘和
//int fn(int a)     //用于计算输入值的阶乘
//{
//	int op = 1;
//	for (a; a > 0; a--)
//	{
//		op = op * a;
//	}
//	return op;
//}
//
//int main()
//{
//	int i = 1;
//	int Sum = 0;
//	for (i = 1; i <=3; i++)//1~10的阶乘
//	{
//		Sum += fn(i);
//	}
//	printf("结果为%d", Sum);
//	return 0;
//}

////二分法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1 ;
//	int mid = (left + right) / 2;
//
//	while (mid != key)
//	{
//		if (left > right)
//		{
//			printf("找不到");
//			return 0;
//		}
//		if (mid > key)
//		{
//			right -= 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			left += 1;
//			mid = (left + right) / 2;
//		}
//	}
//	printf("%d在第%d个", key, (mid + 1));
//	return 0;
//}
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to wonder land!!!";
	char arr2[] = "#########################";
	int left = 0;
	int right = sizeof(arr1) - 2;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);//休眠一秒
		system("cls");//清屏
	}
	printf("%s\n", arr2);
	return 0;
}

