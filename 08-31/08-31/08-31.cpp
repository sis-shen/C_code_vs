#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define SQUARE(X) X*X

//int main()
//{
//	FILE* pf = fopen("log,txt", "w");
//	for (int i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file: %s line = %d date=%s time=%s i=%d \n", __FILE__, __LINE__,__DATE__,__TIME__,i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#define M 100
//#define ADD(X) ((X)+(X))
//
//int main()
//{
//	printf("%d \n", ADD(M+2));
//}

//#define PRINTF(N) printf("the value of "#N" is %d\n",N )//#N»á±»Ìæ»»³É"a"
//
//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int a = 10;
//	//printf("the value of a is %d\n", a);
//	PRINTF(a);
//
//	int b = 20;
//	//printf("the value of b is %d\n", b);
//
//	printf("%d\n", CAT(100, 86));
//	return 0;
//}

//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++, b++);
//	printf("m=%d a=%d b=%d", m, a, b);
//	return 0;
//}

#include <malloc.h>

//#define MALLOC(NUM,TYPE) (TYPE*)malloc((NUM)*sizeof(TYPE))
//
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}

//#define __DEBUG__

//#define M 5
//
//int main()
//{
//	char arr[20] = "zhangsan";
//#ifndef __DEBUG__
//	printf(arr);
//#endif
//
//#if !defined(MAX)
//	printf("wow");
//#endif
//
//#if 1
//	printf("hehe\n");
//#endif
//
//#if M<5
//	printf("hehe\n");
//#elif M==5
//	printf("haha\n");
//#else
//	printf("heihei");
//#endif
//
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}


#include <stddef.h>

#define OFFSETOF(TYPE,M_NAME)     (size_t)&(((struct S*)0)->M_NAME)

struct S
{
	char c1;
	int  i;
	char c2;
};

int main()
{
	printf("%d\n", OFFSETOF(struct S,c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));

	return 0;
}