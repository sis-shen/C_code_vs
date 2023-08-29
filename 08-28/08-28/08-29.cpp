#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>

//char* my_getchar(void)
//{
//	//返回栈空间地址的问题
//	char p[] = "野指针";
//	return p;
//}
//
//void test(void)
//{
//	char* str = my_getchar();
//	printf(str);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

////求两数的最大公约数和最小公倍数的和
//
//int main()
//{
//	long m = 0;
//	long n = 0;
//	while (scanf("%ld %ld", &m, &n))
//	{
//		long i = m;
//		long  j = n;
//		long r = 0;
//		while (r = i % j)
//		{
//			i = j;
//			j = r;
//		}
//		//j是最大公约数
//		//最小公倍数为m=n/j
//		printf("%ld\n", m * n / j + j);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//}

//柔性数组
//typedef struct S
//{
//	int i;//数组前必须有一个成员
//	int a[0]; //0可不写
//};
//
//int main()
//{
//	//柔性数组的使用
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->i = 100;
//
//	//扩增数组
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


////不推荐-内存不连续
//struct S   //成员都存在堆区
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		return 1;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//struct str {
//	int len;
//	char s[0];
//};
//
//struct foo {
//	struct str* a;
//};
//
//int main(int argc, char** argv) {
//	struct foo f = { 0 };
//	if (f.a->s) {
//		printf(f.a->s);
//	}
//	return 0;
//}

//int main()
//{
//	int* a;
//	return 0;
//}

#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		//printf("%s\n", strerror(errno));
//		return 1;
//	}
//	////写文件
//	//for (char i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i, pf);
//
//	//}
//
//	//读取字符串
//	//char arr[20];
//	//fgets(arr, 20, pf);
//	//printf("%s\n", arr);
//
//
//
//	//读文件
//	//int ch = fgetc(pf);
//	//printf("%c",ch);
//	//int ch;
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	printf("%c\n", ch);
//	//}
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S {
	char arr[10];
	int age;
	float score;
};




//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen:");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = { "zhangsan",25,50.5f };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen:");
		return 1;
	}

	//fscanf(pf, "%s %d %f", s.arr,&( s.age),&( s.score));

	//printf("%s %d %f", s.arr, s.age, s.score);

	fprintf(stdout, "666");


	fclose(pf);
	pf = NULL;
	return 0;
}

//任何一个C程序，只要运行起来就会默认打开3个流
//FILE* stdin 标准输入流（键盘)
//FILE* stdout 标准输出流 (屏幕)
//FILE* stderr 标准错误流 (屏幕)