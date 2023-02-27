#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void menu()
{
	printf("*****************************************\n");
	printf("*****************1. play  ***************\n");
	printf("*****************0. exit  ***************\n");
	printf("*****************************************\n");
}

void game()
{
	printf("扫雷\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("选择错误，重新选择");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}