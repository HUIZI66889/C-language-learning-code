#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站P13








////B站P13
////二维数组在内存中的存储
//int main()
//{
//	int arr[3][4] = { { 1,2,3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////B站P13
////二维数组
//int main()
//{
//	int arr[3][4] = { { 1,2,3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////B站P13
//一维数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}


////B站P13
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算数组大小
//	int i = 0;
//	for (i = 0; i < sz; i++);
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////B站P13
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //15(随机值)
//	return 0;
//}


////B站P13
//int main()
//{
//	char arr[] = "abcdef";
//	//sizeof是计算arr所占空间的大小，包括\0
//	printf("%d\n", sizeof(arr));
//	//strlen是在求字符串的长度，找到\0停止
//	printf("%d\n", strlen(arr));
//	return 0;
//}


////B站P13
////创建一个数组-存放10个整形
//int main()
//{
//	int arr[10];
//	char arr2[5];
//	return 0;
//}


////B站P12
////迭代
////求第n个斐波那契数（不考虑溢出）---循环
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--测试驱动开发（先想函数怎么用，再想如何实现）
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


////B站P12
////递归
////求第n个斐波那契数（不考虑溢出）---前两个数之和等于第三个数
//int count = 0;
//int Fib(int n)
//{ 
//	//if (n == 3) //计算第3个斐波那契数的计算次数
//	//{
//	//	count++;
//	//}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--测试驱动开发（先想函数怎么用，再想如何实现）
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}


////B站P12
////递归
////求n的阶乘（不考虑溢出）---递归的方式
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n); //递归的方式
//	printf("%d\n", ret);
//	return 0;
//}


////B站P12
////迭代
////求n的阶乘（不考虑溢出）---循环的方式
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n); //循环的方式
//	printf("%d\n", ret);
//	return 0;
//}


////B站P11
////递归
////编写函数不允许创建临时变量（下例中不用count），求字符串的长度
//
////解题流程：把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0;
////3
// 
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	//str是指向b的，向后加1指向i
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


////B站P11
////迭代
////编写函数求字符串的长度
////#include<string.h>
////模式实现strlen函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++; //指针向后走一步，str是指针
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}

	
////B站P11
////递归
////接收一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4.
//void print(int n) //1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d ", &num);
//	print(num);
//	return 0;
//}


////B站P11
////最简单的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//} //打印结果是hehe的死循环
