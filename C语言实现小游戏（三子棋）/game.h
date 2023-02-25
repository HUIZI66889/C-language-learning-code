#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

//º¯ÊýÉùÃ÷
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL],int row,int col);