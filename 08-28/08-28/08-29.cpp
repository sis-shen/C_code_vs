#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>

//char* my_getchar(void)
//{
//	//����ջ�ռ��ַ������
//	char p[] = "Ұָ��";
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

////�����������Լ������С�������ĺ�
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
//		//j�����Լ��
//		//��С������Ϊm=n/j
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

//��������
//typedef struct S
//{
//	int i;//����ǰ������һ����Ա
//	int a[0]; //0�ɲ�д
//};
//
//int main()
//{
//	//���������ʹ��
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->i = 100;
//
//	//��������
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


////���Ƽ�-�ڴ治����
//struct S   //��Ա�����ڶ���
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
//	////д�ļ�
//	//for (char i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i, pf);
//
//	//}
//
//	//��ȡ�ַ���
//	//char arr[20];
//	//fgets(arr, 20, pf);
//	//printf("%s\n", arr);
//
//
//
//	//���ļ�
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

//�κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3����
//FILE* stdin ��׼������������)
//FILE* stdout ��׼����� (��Ļ)
//FILE* stderr ��׼������ (��Ļ)