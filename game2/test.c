#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��������Ϸ�����Ĳ���

void menu()
{
	printf("***************************\n");
	printf("*****    1 . play   *******\n");
	printf("*****    0 . exit   *******\n");
	printf("***************************\n");
	printf("��ѡ��>\n");
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
		printf("���Ӯ�ˣ�\n");
	else if (ret == '#')
		printf("����Ӯ�ˣ�\n");
	else if (ret == 'Q')
		printf("ƽ��\n");

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
			printf("�Բ���������������������������룡\n");
			break;
		}
	} while (input);
	return 0;
}