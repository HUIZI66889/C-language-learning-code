#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////B站P32
////指针数组正确使用方法
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", * (parr[i] + j));//指针向后偏移j位
//		}
//		printf("\n");
//	}
//	return 0;
//}


////B站P32
////指针数组
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for(i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


////B站P32
////指针
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//32位平台指针的大小是4个字节/一个元素的大小：4字节=1
//	printf("%d\n", sz);//1
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

////B站P29
////测试
//int main()
//{
//	unsigned int i = -1;
//	printf("%u\n", i);
//	return 0;
//}


////B站P28
////写一段代码告诉我们当前机器的字节序是什么(简化)
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


////B站P28
////写一段代码告诉我们当前机器的字节序是什么(函数)
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	//返回1，小端；  返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


////B站P28
////写一段代码告诉我们当前机器的字节序是什么
//int main()
//{
//	int a = 1;//0x00000001
//	char* p = (char*)&a;//对a进行强制类型转换，char只有一个字节
//	if (*p == 1)
//	{
//		printf("小端\n");//01000000
//	}
//	else
//	{
//		printf("大端\n");//00000001
//	}
//	return 0;
//}


////B站P28
////数据在内存中存的是补码，cpu只能执行加法
////1-1如何运算呢
////int main()
//{
//	1 - 1;
//	//看成1+（-1）
//	//1的补码：00000000000000000000000000000001
//	//-1的补码：11111111111111111111111111111111
//	//两个补码相加100000000000000000000000000000000（33个数）
//	//只能存32个数，因此相加结果变为00000000000000000000000000000000（32个0）
//	return 0;
//}