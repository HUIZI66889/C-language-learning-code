#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站P10
//函数的链式访问
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
 } //输出结果为4321，内层printf函数打印完之后的返回值给中间的printf,中间函数打印的返回值给外层函数
//printf函数的返回值是打印在屏幕上字符的个数
 
 
////B站P10
////函数的链式访问
//int main()
//{
//	int len = 0;
//	//第1种写法
//	len = stlen("abc");
//	printf("d\n", len); //常规写法
//	//第2种写法
//	printf("%d\n", strlen("abc")); //链式访问
//	return 0;
//}

////B站P10
////写一个函数，每调用这个函数，就会将num的值+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num); //要在Add函数中操作改变num的值，要传地址进去
//	printf("num = %d\n",num); //1
//	Add(&num);
//	printf("num = %d\n", num); //2
//	Add(&num);
//	printf("num = %d\n", num); //3
//	return 0;
//}


////B站P10
////写一个函数，实现整形有序数组的二分查找
////如果找到了返回下标，找不到返回-1
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数子\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

////B站P10
////写一个函数路判断一年是不是闰年
////是闰年返回1，不是返回0
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0; //注意不要在函数里打印
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


////B站P10
////写一个函数路判断一个数是不是素数
//
////是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a <= n - 1; a++) //此处可以优化成a<=sqrt(n)，头文件是include<math.h>
//	{
//		if (n % a == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1) //注意这里如何调用的函数
//			printf("%d ", i);
//	}
//	return 0;
//}


////写一个函数交换两个整形的内容
////当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的
//void Swap(int* pa, int* pb) //使用pa,pb两个指针进行接收
//{
//	int tmp = 0;
//	tmp = *pa; //*pa就是外面的a
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	Swap(&a, &b);   //把a和b的地址传给Swap这个函数
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


////写一个函数交换两个整形的内容
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


////B站P10
////写一个函数可以找到两个数中的较大值
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


////B站P10
////写一个函数可以找到两个数中的较大值（自己写的）
//
//int bigger(int x , int y)
//{
//	if (x > y)
//		return x;
//	    //printf("%d",x);
//	else
//		return y;
//		//printf("%d", y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	bigger(a, b);
//	int big = bigger(a, b); //把bigger函数的返回值放在big里面再打印出来，也可以直接在函数中打印
//	printf("%d", big);
//	return 0;
//}



////B站P10
////尝试使用memset函数
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



////B站P10
////尝试使用strlen函数
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



////B站P9
////go to 语句
////一个关机程序
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 是一个关机命令
//	//system()  是执行系统命令的，括号里面的要用双引号引起来
//	system("shutdown -s -t 30");
//again:
//	printf("请注意你的电脑在30s内关机，如果输入：我是猪，就取消关机\n 请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



////B站P9
////猜数字游戏//
//
//void menu() //void函数返回值为空
//{
//	printf("########################\n");
//	printf("#   1.play    0.exit   #\n");
//	printf("########################\n");
//}
//
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	//1.生成一个随机数（rand()生成随机数函数）
//	//2.猜数字
//
//	int ret = 0;
//	int guess = 0;
//
//	//拿时间戳来设置随机数的生成起点
//	//srand本来放在这里，但是会被调用很多次，使得生成的数不随机（快速选择1的时候会生成两个一样的数），所以放在下面，调用一次就可以
//
//	ret = rand()%100+1;//原本是ret = rand(),生成0~32767之间的数字太大，故取模加1，使其生成0~100之间的数字
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了\n");
//				break;
//			}
//	}
//}   
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //time函数是整形，前面的括号是强制类型转换成unsigned int
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//		    break;
// 		}
//	} while (input); //case 1和default都要继续循环，当为case 0的时候为假，退出游戏
//	return 0;
//}