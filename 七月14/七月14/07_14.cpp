#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <memory.h>

//Ѱ�����Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int max = 0;
//	max = (m < n) ? m : n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��Ϊ%d", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

////��ӡ100~200������
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 2;
//		for ( j = 2; j < i / 2 + 1; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i / 2 + 1)
//		{
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "that hurt";
//	memset(arr, 'o', 4);//�滻�ַ����е��ַ�
//	printf("%s", arr);
//	return 0;
//}

//�Զ��庯��
//int get_max(int a , int b)
//{
//	return (a > b) ? a : b;
//}
//
//int main()
//{
//	int a = 13;
//	int b = 46;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	printf("%s", max);
//	return 0;
//}
void Swap(int* x, int* y)
{
	int z = 0;
	int* pz = &z;
	*pz = *y;
	*y = *x;
	*x = *pz;
}

int main()
{
	int a = 10;
	int b = 250;

	printf("����ǰ��a=%d,b=%d\n", a, b);
	Swap(&a,&b);
	printf("������: a=%d,b=%d", a, b);
	return 0;
}