#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float InchLenth = 0;
	float CmLenth = 0;
	
	scanf("%f", &InchLenth);
	CmLenth = InchLenth * 2.54;
	printf("ÀåÃ×³¤¶È£º%f\n", CmLenth);
	return 0;
}