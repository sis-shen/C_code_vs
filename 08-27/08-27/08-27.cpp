#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	p++;//��һ���ͱ���
//	free(p);
//
//
//	return 0;
//}

//����ʾ��

void GetMemory(char* p)
{
	p = (char*)malloc(100);
}

void test()
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}

int main()
{
	test();
	return 0;
}