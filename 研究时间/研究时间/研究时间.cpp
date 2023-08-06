#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
	int ti = 0;
	while (1)
	{
		getchar();
		ti = (int)time(NULL);
		printf("%d", ti);
	}
	return 0;
}