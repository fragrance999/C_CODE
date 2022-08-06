#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//三子棋游戏函数的实现



void init_board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
}


void display_board(char board[ROW][COL], int row, int  col)
{

	int i;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1)
			printf("---|---|---\n");
			
	}
}


void play_board(char board[ROW][COL], int row, int  col) 
{


	while (1)
	{
		int x = 0, y = 0;
		printf("玩家下棋：>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else 
				printf("对不起，您输入坐标已经被占用，请重新输入！\n");
		}
		else 
			printf("对不起，您输入坐标有误，请重新输入！\n");
	}
}


void computer_board(char board[ROW][COL], int row, int  col)
{
	printf("电脑下棋：>\n");
	while (1)
	{
		int x, y;
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}



int is_full(char board[ROW][COL], int row, int  col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	
	}
	return 1;
}

char  is_win(char board[ROW][COL], int row, int  col)
{
	int i;

	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (is_full( board, row, col) == 1)
		return 'Q';

	return 'C';


}