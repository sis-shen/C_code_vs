#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//模拟用户登录三次

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);
//		//if (password = "123456") 不能用于比较字符串
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("登录失败");
//	}
//	return 0;
//}

//从大到小输出三个数
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("请输入三个数:>");
	scanf("%d %d %d",&a, &b, &c);
	if (a < b)
	{
		int tmp = 0;
		tmp = a;
		a = b;
		b = tmp;
	}

	if (a < c)
	{
		int tmp = a;
		tmp = a;
		a = c;
		c = tmp;
	}

	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d >%d > %d", a, b, c);
	return 0;
}

