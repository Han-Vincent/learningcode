#ifndef __GAME_H__
#define __GAME_H__


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define BOOMS 10

void Initboard(char board[ROWS][COLS], int rows, int cols,char set);
void Desplayboard(char board[ROWS][COLS], int row, int col);
void makebooms(char board[ROWS][COLS], int row, int col,int booms);

#endif