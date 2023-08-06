#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "add.h"

//int main()
//{
//	int a = 250;
//	int b = 479;
//	printf("%d", Add(a, b));
//	return 0;
//}
//
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//===========================
//使用临时变量
//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////不适用临时变量，但递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char wow[] = { "WowCool" };
//	printf("%d", my_strlen(wow));
//	return 0;
//}

//斐波那契数

////递归版
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d", count);
//
//	return 0;
//}

////循环版
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//		
//	}
//	return c;
//}
//int main()
//{
//	int ret = 0;
//	scanf("%d", &ret);
//	printf("%d", Fib(ret));
//	return 0;
//}

int DigitSum(int num)
{
	if (num > 9)
		return (DigitSum(num / 10)) + num % 10;
	else
		return num;

}

int main()
{
	int num = 1792;
	int sum = DigitSum(num);
	printf("%d\n", sum);

	return 0;
}