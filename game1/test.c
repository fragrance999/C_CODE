#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("��������������������������������\n");
	printf("������������1.play��������������\n");
	printf("������������0.exit��������������\n");
	printf("��������������������������������\n");

}

void game()
{
	int game_num = 0;

	while (1)
	{
		int n = rand() % 100;
		printf("������һ�����֣�>\n");
		scanf("%d", &game_num);
		printf("%d\n", n);
		if (game_num > n)
				printf("\n\n%d > %d �����²�������д�\n\n", game_num, n);
		else if (game_num < n)
			printf("\n\n%d < %d �����²������С��\n\n", game_num, n);
		else
		{
			printf("\n\n%d = %d �¶��ˣ�\n\n", game_num, n);
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
		printf("�����ѡ���Ƿ�ʼ��Ϸ:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("������������\n");
			break;
		}
	
	} while (input);

	return 0;
}


