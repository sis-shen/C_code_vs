#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	 }
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest++ = *src++;
//}

#include <assert.h>

//char * my_strcpy(char* dest, const char* src)
//{
//
//
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//
//	my_strcpy(arr1, arr2);//复制字符串内容
//	printf("%s", arr1);
//}
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//
//	assert(str != NULL);//不能为空指针
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//
//	return 0;
//}

#include <math.h>

int main()
{
	int sum = 0;
	int n = 0;
	int tmp = 0;
	for (int i = 1; i <= 10000; i++)
	{
		sum = 0;
		n = 1;
		tmp = i;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		for (int j = 0; j< n; j++)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}