#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一个函数交换两个整形的内容
//当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的
void Swap(int* pa, int* pb) //使用pa,pb两个指针进行接收
{
	int tmp = 0;
	tmp = *pa; //*pa就是外面的a
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	Swap(&a, &b);   //把a和b的地址传给Swap这个函数
	printf("a=%d b=%d\n", a, b);
	return 0;
}


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