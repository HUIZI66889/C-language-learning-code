#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//给定两个数，求这两个数的最大公约数
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);



	return 0;
}



////写一段代码打印1-100之间所有3的倍数的数字
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


////从大到小输出3个值
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//两个%d之间如果啥都不加，输入数据的时候使用空格隔开就行
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}