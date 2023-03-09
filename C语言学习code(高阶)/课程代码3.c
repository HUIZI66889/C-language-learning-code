#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站P34
//
int main()
{

	return 0;
}


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