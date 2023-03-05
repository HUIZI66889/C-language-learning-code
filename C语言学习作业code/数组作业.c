#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站P24
//统计二进制中1的个数
//写一个函数，返回参数二进制中1的个数
int main()
{
	
	return 0;
}


////B站P23
////交换数组：将数组A中的内容华人数组B中的内容进行交换（数组一样大）
//int main()
//{
//	int arr1[]={ 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


////B站P23
////下题第三步在这里实现逆置
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//把数组初始化为0
//	Print(arr, sz);
//	Reverse(arr,sz);//把数组内容变成10，9，8，7...
//	Print(arr, sz);
//	return 0;
//}


//B站P23
//创建一个整型数组，完成对数组的操作
//1.实现函数Init初始化数组为全0
//2.是实现Print()，打印数组的每个元素
//3.实现Reverse()，函数完成数组元素的逆置
//要求：自己设计以上函数的参数，返回值
//void Init(int arr[], int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);//把数组初始化为0
//	Print(arr, sz);
//	return 0;
//}