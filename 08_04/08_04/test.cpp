#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	//下
//	for (int i = 0; i < line - 1; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");;
//		}
//
//		for (int j = 0; j < 2*(line -1-i) -1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//money total empty



//int main()
//{
//
//	int money;
//	scanf(" %d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = a > b ? a : b;
//	while (true)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n",m);
//
//
//	return 0;
//} 

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d",a* i);
//	return 0;
//}

#include <string.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}/*


int main()
{
	char arr[101] = { 0 };
	gets_s(arr);

	int len = strlen(arr);
	reverse(arr, arr + len - 1);


	char* start = arr;

	while (*start != '\0')
	{
		char* end = start;

		while (*end != ' ' && *end !='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;

	}
	printf("%s", arr);


	return 0;
}*/

int main()
{
	int a = 1;
	(char)a;
	if (a)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}

	return 0;
}
