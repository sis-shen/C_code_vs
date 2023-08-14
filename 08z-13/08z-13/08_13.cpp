#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int ADD(int x,int y)
{
	return x + y;
}

int SUB(int x, int y)
{
	return x - y;
}


int main()
{
	int (*pf)(int, int) = ADD;

	int (*arr[])(int, int) = { ADD,SUB };

	return 0;
}
+