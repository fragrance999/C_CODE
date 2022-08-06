#pragma once

//三子棋游戏函数的声明

#include<stdlib.h>
#include<time.h>
#include<stdio.h>

#define ROW 3
#define COL 3

//初始化棋盘
void init_board(char board[ROW][COL],int row,int  col);

//打印棋盘
void display_board(char board[ROW][COL], int row, int  col);

//玩家下棋
void play_board(char board[ROW][COL], int row, int  col);

//电脑下棋
void computer_board(char board[ROW][COL], int row, int  col);

//判断状态
char  is_win(char board[ROW][COL], int row, int  col);

