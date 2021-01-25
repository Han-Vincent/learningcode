#ifndef __GAME_H__
#define __GAME_H__


#define _CRT_SECURE_NO_WARNINGS 1


#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
//声明函数
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int isFull(char board[ROW][COL], int row, int col);
char result(char board[ROW][COL], int row, int col);
#endif
/*


选手下棋
电脑下棋
判断对局结果








*/