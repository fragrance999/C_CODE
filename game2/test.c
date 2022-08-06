#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//三子棋游戏函数的测试

void menu()
{
	printf("***************************\n");
	printf("*****    1 . play   *******\n");
	printf("*****    0 . exit   *******\n");
	printf("***************************\n");
	printf("请选择：>\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	init_board(board, ROW, COL);
	while (1)
	{
		play_board(board, ROW, COL);

		display_board(board, ROW, COL);

		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;

		computer_board(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}

	if (ret == '*')
		printf("玩家赢了！\n");
	else if (ret == '#')
		printf("电脑赢了！\n");
	else if (ret == 'Q')
		printf("平局\n");

	display_board(board, ROW, COL);

}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("对不起，您输入的数字有误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}