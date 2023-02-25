#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

//函数声明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//告诉我们四种游戏的状态
//玩家赢   '*'
//电脑赢   '#'
//平局     'Q'
//谁都没赢，继续游戏   'C'
char IsWin(char board[ROW][COL], int row, int col); //小写的row,col是真实的行和列