#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>


struct S
{
	char  arr[20];
	int age;
	float score;
};

//int main()
//{
//	struct S s = { "zhangsan",50,25 };
//	//�Զ����Ƶ���ʽд��
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fonen:");
//		return 1;
//	}
//
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	struct S s = { "zhangsan",20,55.5f };
//	char buf[100];
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//	printf(buf);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	//��λ�ļ�ָ��
//	fseek(pf,2 , SEEK_SET); //ƫ����Ϊ2   (a->c)
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	printf("%d\n", ftell(pf));
//
//	rewind(pf); //��ָ��ص���ʼλ��
//	printf("%d\n", ftell(pf));
//
//
//	fclose(pf);//�ر��ļ���ˢ�»�����
//
//	pf = NULL;
//	return 0;
//}


