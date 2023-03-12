#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站P40
//实现strcpy
#include<assert.h>
my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}