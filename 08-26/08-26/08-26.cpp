#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////ö��
//enum Day
//{
//	Mon,//ö�ٳ���
//	Tues,
//	Wed,
//	whur,
//	Fri,
//	Sat,
//	Sun,
//};
//
//enum Sex
//{
//	MALE = 1,
//	Female,
//	SECRET,
//};
//
//int main()
//{
//	enum Day d = Fri;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//
//	printf("%d\n", MALE);
//
//	return 0;
//}

//������

//union Un
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	union Un u;
//	printf("%u", sizeof(u));
//
//	return 0;
//}

//�жϴ��С��

//int main()
//{
//	int a = 1;
//	char c = (char)a;
//	char b = *((char*)&a);
//	printf("%d", a);
//}

//int check_sys()
//{
//	union Un
//	{
//		int a;
//		char c;
//	} u;
//
//	u.a = 1;
//	//����1��С�ˣ�0�Ǵ��
//	return u.c;
//
//}

//union Un
//{
//	char arr[5];//������1
//	int i;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}