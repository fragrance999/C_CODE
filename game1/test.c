#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("————————————————\n");
	printf("——————1.play———————\n");
	printf("——————0.exit———————\n");
	printf("————————————————\n");

}

void game()
{
	int game_num = 0;

	while (1)
	{
		int n = rand() % 100;
		printf("请输入一个数字：>\n");
		scanf("%d", &game_num);
		printf("%d\n", n);
		if (game_num > n)
				printf("\n\n%d > %d 您所猜测的数字有大。\n\n", game_num, n);
		else if (game_num < n)
			printf("\n\n%d < %d 您所猜测的数字小。\n\n", game_num, n);
		else
		{
			printf("\n\n%d = %d 猜对了！\n\n", game_num, n);
			break;
		}
	}


}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请进行选择，是否开始游戏:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("请再输入数字\n");
			break;
		}
	
	} while (input);

	return 0;
}


