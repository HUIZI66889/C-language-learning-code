#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//B站P15
//测试三子棋
void menu()
{
	printf("****************************************\n");
	printf("************1.play   0.exit*************\n");
	printf("****************************************\n");
}

//游戏的算法实现
void game()
{
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = {0}; //全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL); //传了数组，行，列过来
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("三子棋\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}