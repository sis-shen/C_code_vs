#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strcpy(char* dest, const char* src)
{
	char* tmp = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return tmp;
}

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}

	while (*dest++ = *src++)
	{
		;
	}
	return ret;

}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello ";
//	my_strcat(arr, "world");
//
//	printf("%s", arr);
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//
//
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0' && *s2!='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		else  if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		p++;
//	}
//	return NULL;
//
//}
//
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("’“≤ªµΩ");
//	}
//	else {
//
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	const char* sep = "@.";
//	char str[] = "adongfa@bit.com";
//	return 0;
//}

//int main()
//{
//	printf("%s", NULL);
//	return 0;
//}

int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{

	}
	return 0;
}