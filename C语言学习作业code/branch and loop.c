#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////在屏幕上输出一个9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i,j,i*j);   //注意括号里的数的写法，%2d表示这里有两位数字，如果不够两位数，用空格补齐
//		}      //把%d改成%-2d，表示两位数左对齐
//		printf("\n");
//	}
//	return 0;
//}


////求10个整数中的最大值
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0]; //假设max就是最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


////分数求和：计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//注意答案应该为小数
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;    //sum = sum + flag*1.0/i
//		flag = -flag;
//	}
//	printf("%lf\n", sum);//打印浮点型用lf
//	return 0;
//}


////分数求和：计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double even = 0.0;
//	double odd = 0.0;
//	int a = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			even += -(1.0/i);
//		}
//		else
//		{
//			odd += 1.0 / i;
//		}
//		sum = even + odd;
//	}
//	printf("sum = %lf", sum);
//	return 0;
//}


////编写程序数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//个位为9，模10一定为9
//		//十位为9，除10一定商9
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


////打印素数：写一段代码，打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则：1.试除法：素数只能被1和它本身整除
//		//产生2到i-1的数字
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


////打印1000到2000年之间的闰年
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是否是闰年。1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		if (year%4 == 0 && year%100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


////给定两个数，求这两个数的最大公约数
//
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//
//	while (m%n)
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


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