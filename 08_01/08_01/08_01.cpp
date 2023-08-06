#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//统计二进制中1的个数

//int count_num_of(unsigned int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 2;
//		n /= 2;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of(num);
//	printf("%d", n);
//	return 0;
//}

//int count_1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_1(num);
//	printf("%d", n);
//	return 0;
//}

//int count_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		scanf("%d", &num);
//		int n = count_1(num);
//		printf("%d\n", n);
//	}
//	return 0;
//}

////判断是否为2的n次方
//int main()
//{
//	int num = 0;
//	scanf("%d", num);
//	if (num & (num - 1) == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}


//int count_diff_bit(int m,int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i)&1 )!= ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d", ret);
//
//	return 0;
//}
//
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		count++;
//		ret = ret & (ret - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d", ret);
//
//	return 0;
//}

int main()
{
	int num = 0;
	scanf("%d", &num);
	//获取奇数位
	for (int i = 30; i >= 1; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	//获取偶数位
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}

	return 0;
}