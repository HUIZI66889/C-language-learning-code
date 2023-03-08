#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////B站P33
////数组指针用在二维数组更方便
////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p+i)+j));//*（p+i）是找到i行的数据解引用，+j是找到i行j列的元素解引用（找到某个元素）
//		}//或者写成：(*(p+i))[j]
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr是数组名，是首元素地址
//	print2(arr, 3, 5);
//	return 0;
//}


////B站P33
////二维数组
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}


////B站P33
////数组指针的用法（不用数组指针更方便）
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


////B站P33
////数组指针的用法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));//*pa == arr，*pa是数组名，数组名是首元素地址，首元素地址+i指向后跳i个元素
//	}
//	return 0;
//}


////B站P33
////数组指针的用法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}


////B站P33
// //写pa的类型
////char* arr[5]
////pa =&arr;
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;//pa指向的数组有5个元素，故[5]，这5个元素的类型是char*，故（*pa）左边是char*
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}
 
 
////B站P33
////数组指针
//int main()
//{
//	int* p = NULL;//p是整形指针，指向整型的指针，可以存放整形的地址
//	char* pc = NULL;//pc是字符指针，指向字符的指针，可以存放字符的地址
//	//数组指针，指向数组的指针，可以存放数组的地址
//	//int arr[10] = { 0 };
//	//arr，首元素地址
//	//&arr[0]，首元素的地址
//	//&arr，数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	return 0;
//}