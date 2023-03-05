#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////B站P24
////使用指针打印数组内容
////写一个函数打印arr数组的内容，不使用数组下标，使用指针，arr是一个整型一维数组
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


////B站P24
////打印二进制的奇数位和偶数位。
////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//因为内存中存的是补码，所以打印出来的是补码
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


////B站P24
////求二进制位中不同位的个数
////两个int(32位)整数m和n的二进制表达式中，有多少个位(bit)不同？
////eg:1999 2299中7个位不同
////使用异或，相同为0，相异为1
//
//int get_diff_bit(m, n) 
//{
//	int tmp = m ^ n;
//	int count = 0;
//	//return count_bit_one(tmp);
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m,n);
//	printf("count = %d\n", count);
//	return 0;
//}


////B站P24
////统计二进制中1的个数
////写一个函数，返回参数二进制中1的个数
////一个数在内存中存的是补码，应求补码中1的个数
////十进制中的每一位可以通过模10.除10得到，二进制中的可以模2，除2
////除了上述方法之外，还可1.二进制位右移1与1按位与。2.n=n&(n-1)——>按位与一次去掉一个1
////int count_bit_one(unsigned int n )//unsigned针对负数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;//去掉一位
//	}
//	return count;
//}
//int main()
//{
//	int a = 14;
//	scanf("%d", &a);
//	//写一个函数求a的二进制表示中（补码）有几个1
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//}


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