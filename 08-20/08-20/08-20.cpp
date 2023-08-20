#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, int num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char *)src + 1;
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