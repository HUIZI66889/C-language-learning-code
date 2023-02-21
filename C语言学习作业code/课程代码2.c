#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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
////递归
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
