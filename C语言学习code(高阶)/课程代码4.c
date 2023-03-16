#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站
//



////B站P51
////strtok使用
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	/*char buf[1024] = { 0 };
//	strcpy(buf, arr);*/
//	//切割buf中的字符串
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	////第二次及之后都传NULL
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}


////B站P49
////实现strcmp
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}


////B站P40
////实现strcat
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////B站P40
////实现strcpy
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}