#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, int num)
{
	char* s1 = (char*)dest;
	char* s2 = (char*)src;
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return ret;


}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int arr2[10] = { 0 };

	my_memcpy(arr2, arr, 32);
	return 0;
}