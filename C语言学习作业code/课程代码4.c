#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////B站P27
////模式实现strlen
//int my_strlen(const char *str)
//{
//	int count = 0;
//	arrert(str != NULL); //断言指针，保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


////B站P27
////模拟实现库函数strcpy(优化)
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src) //*src不能修改，修改会报错
//{
//	char* ret = dest;
//	assert(dest !=NULL);//断言函数
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含\0字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret; //返回目的地的起始地址
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


////B站P27
////模拟实现库函数strcpy(优化)
//void my_strcpy(char* dest, char* src) 
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////B站P27
////模拟实现库函数strcpy
//void my_strcpy(char* dest, char* src) 
//{
//	while (*src != '\0')
//	{
//		*dest = *src;//优化：删除下述两行，本行换成  *dest++=*src++
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////B站P27
////调试解决死循环的原因
////不同环境下越界的位置不同
////如果i和arr交换顺序后不会死循环，但是写着很奇怪
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0; //非法访问arr[10]，arr[11]，arr[12]，并改成了0
//	//arr[10]，arr[11]为随机值，但是arr[12]是12，且将arr[12]变为0后，i变成0再次进入循环
//	//当arr[12]和i是同一空间的时候是两个会同时变，在监视窗口中取地址两个值后发现地址一样
//	//
//	}
//	system("pause");
//	return 0;
//}


////B站P27
////调试解决死循环的原因
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


////B站P27
////下述代码修改后的结果
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////B站P27
////尝试调试下面代码
////设置断点的条件（3==i）
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}