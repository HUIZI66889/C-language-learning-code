#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//B站P29
//测试
int main()
{
	unsigned int i = -1;
	printf("%u\n", i);
	return 0;
}


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