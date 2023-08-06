#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()      //使用判断语句
//{
//	int Inpute = 0;
//
//	printf("是否做宣发(1/0)\n");
//	scanf("%d", &Inpute);
//	if (Inpute == 1)
//	{
//		printf("高销售高成本\n");
//	}
//	else
//	{
//		printf("低销售低成本\n");
//	}
//
//
//	return 0;
//}


//int main()               //循环语句
//{
//	int line = 0;
//	while (line < 200)
//	{
//		printf("\"写代码\"%d\n", line);
//		line++;
//	}
//	if (line == 200);
//	{
//		printf("获得成就：初学者");
//	}
//
//	return(0);
//
//}


//int ADD(int Num1, int Num2)//使用函数
//{
//	return Num1 + Num2;
//}
//
//
//int main()
//{
//	int Num1=0, Num2=0;
//	scanf("%d %d", &Num1, &Num2);
//	int Output = ADD(Num1, Num2);
//	printf("%d\n", Output);
//	return 0;
//}


////数组
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,9,20 };
//	char ch1[5] = { 'a','b','c' };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	}
//	return 0;
//}

//操作符
//利用sizeof计算数组元素个数
//int main()
//{
//	int arr[20] = { 0 };
//	int Size = 0;
//	Size = sizeof(arr) / sizeof(arr[0]);
//	printf("数组的元素个数为%d\n", Size);
//	return 0;
//}


////按位取反1001>>0110>>0101>>1010==-2
//int main()
//{
//	int a = 1;
//	printf("%d\n", ~a);
//	
//	return 0;
//
//}


//三目操作符---a/b中的较大项
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//
//	return 0;
//}

//临时变量
//{
//	int a = 10;//进入括号变量a自动声明，离开括号自动销毁
//}
//


//类型重命名
//typedef unsigned int u_int;
//int main()
//{
//	u_int Num1 = 0;
//	printf("%d\n", Num1);
//	return 0;
//}


//static修饰

//static int g_val = 0;//static修饰使全局变量只能在本源文件使用
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//define定义宏
#define ADD(X,Y) ((X)+(Y))

int main()
{
	printf("%d\n", (4 * ADD(9, 3)));
	return 0;
}