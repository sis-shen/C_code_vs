#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

//#pragma pack(4)
//
//struct S5
//{
//	int i;
//	double d;
//};
//
//#pragma pack()
//
//struct S6
//{
//	int i;
//	double d;
//};
//
//struct S1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//printf("%d\n", offsetof(struct S2, c1));
//	//printf("%d\n", offsetof(struct S2, i));
//	//printf("%d\n", offsetof(struct S2, c2));
//	//printf("%d\n", sizeof(struct S4));
//	printf("%d", sizeof(struct S5));
//	printf("%d", sizeof(struct S6));
//
//
//	return 0;
//}

//位断

struct A
{
	int _a : 2;
	int _b : 5;
	//放入同一个字节

	int _c : 10;//分配10个比特位
	int _d : 30; 
};




int main()
{

	return 0;
}