#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////B站P34
////函数指针数组
//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//	
//	//写一个函数指针pf，能够指向my_strcpy
//	char* (*pf)(char*, const char*);
//	
//	//写一个函数指针数组pfarr，能够存放4个my_strcpy函数的地址
//	char* (*pfarr[4])(char*, const char*);
//	return 0;
//}


////B站P34
////函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址
//	int (*pa)(int, int) = Add;//pa可以存Sub,Mul,Div的地址，因为它们的参数和返回类型是一样的
//	int (*parr[4])(int, int) = {Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//i是1调用加法，i是2调用减法...；5，-1，6，0
//	}
//	return 0;
//}


////B站P34
////指针
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//p2是a的地址指向字符串，该字符串为常量字符串不能被修改
//	//指针数组，是个数组，存放指针的
//	int* arr[10];//数组的每个元素是int*
//	char* ch[5];
//	//数组指针，指向数组
//	int* p3;//整形指针，指向整形的指针
//	char* p4;//字符指针，指向字符的
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//	//上面的数组指针类型是去掉名字pa，为int(*)[5]
//	return 0;
//}