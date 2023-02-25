#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 10
#define COL 10

//º¯ÊýÉùÃ÷
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);