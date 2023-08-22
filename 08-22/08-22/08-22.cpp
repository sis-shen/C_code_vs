#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <memory.h>

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	char* s1 = (char*)dest;
//	char* s2 = (char*)src;
//	if (s1 < s2)
//	{
//		//前->后
//		while (num--)
//		{
//			*s1 = *s2;
//			s1 = s1 + 1;
//			s2 = s2 + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		s1 = s1 + num - 1;
//		s2 = s2 + num - 1;
//		while (num--)
//		{
//			*s1 = *s2;
//			s1 = s1 - 1;
//			s2 = s2 - 1;
//		}
//	}
//	return dest;
//}
//
//
//
//void test1()
//{
//	int arr[] = { 1,2,3,4,5 };
//	my_memmove(arr + 1, arr, 8);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//int main()
//{
//	test1();
//	int arr2[] = { 1,2,3,4,5 };
//	int arr3[] = { 1,1,2 };
//
//
//	return 0;
//}

int main()
{
	int input = 0;

	while (scanf("%d", &input))
	{
		int ret = 0;
		int n10 = 1;
		while (input)
		{
			ret += input % 2 * n10;
			n10 *= 10;
			input /= 10;
		}
		printf("%d\n", ret);
	}
	return 0;
}