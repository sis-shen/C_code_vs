#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <windows.h>




int main()
{
	printf("%d\n", '');
	srand( (unsigned int )time(NULL));
	int x = 0;
	for (int i = 0; i < 100; i++)
	{
		x = rand() %10000 + 1;
		printf("%c", x);
		if (i == 50)
		{
			printf("\n");
		}
	}
}