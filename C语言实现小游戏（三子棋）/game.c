#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//函数的实现
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.打印一行数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]); // 打印的列数固定
//		//2.打印分割行
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
	
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.打印一行数据
			printf(" %c ",board[i][j]);
			
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col) //用户会想到坐标都是从1开始
		{
			if (board[x - 1][y - 1] == ' ') //返回到数组的坐标
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1)
	{
		x = rand() % row; //row如果是3的话，模3的结果是0，1，2
		x = rand() % col; // 使用rand之前调用srand，而且只能调用一次
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}