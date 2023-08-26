#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

//动态内存开辟
//int main()
//{
//	int*p =(int*) malloc(4000000);
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	初始化
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	释放内存
//	free(p);
//	p = NULL;//清除野指针
//
//	printf("成功\n");
//	printf("%d\n", INT_MAX);
//	return 0;
//}

//int main()
//{
//	printf("%ull\n", 5300000000);
//	unsigned long long max = 4300000000;
//	unsigned long  long step = 100000000;
//	int signal = 1;
//	do {
//		printf("%ull\n", max);
//		int* p = (int*)malloc(max);
//		if (p == NULL)
//		{
//			printf("%ull", max);
//			signal = 0;
//		}
//		max += step;
//		free(p);
//		getchar();
//
//
//	} while (signal);
//	return 0;
//}
//
//int main()
//{
//	void* ret = calloc(10, sizeof(int));
//	int* p = (int*)ret;
//	ret = NULL;
//	if (p == NULL)
//	{
//		printf("%s ", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int* ptr =(int*) realloc(p, 80);
//	free(p);
//
//
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(40);
	int* ptr =(int*) realloc(p, 80);//扩容

	return 0;
}