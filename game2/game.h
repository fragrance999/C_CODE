#pragma once

//��������Ϸ����������

#include<stdlib.h>
#include<time.h>
#include<stdio.h>

#define ROW 3
#define COL 3

//��ʼ������
void init_board(char board[ROW][COL],int row,int  col);

//��ӡ����
void display_board(char board[ROW][COL], int row, int  col);

//�������
void play_board(char board[ROW][COL], int row, int  col);

//��������
void computer_board(char board[ROW][COL], int row, int  col);

//�ж�״̬
char  is_win(char board[ROW][COL], int row, int  col);

