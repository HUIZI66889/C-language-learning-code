#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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