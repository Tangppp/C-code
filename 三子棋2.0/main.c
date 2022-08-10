#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("*** 1、play   2、exit ***\n");
	printf("*************************\n");
}
void game()
{
	int ret = 0;
	char board[ROW][COL];
	//初始化数组
	Game_Init(board, ROW, COL);
	//打印棋盘
	Game_DisplayBoard(board, ROW, COL);
	//开始下棋
	while (1)
	{
		Game_Player(board, ROW, COL);
		Game_DisplayBoard(board, ROW, COL);
		ret=Game_IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		Game_Robot(board, ROW, COL);
		Game_DisplayBoard(board, ROW, COL);
		ret = Game_IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '@')
		printf( "player win!!!\n" );
	else if (ret == '$')
		printf("robot win!!!\n");
	else
		printf("Dogfall\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Pleasa Slect One the Options->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("\nexit the game\n");
			break;
		default:
			printf("\ninput error please try again\n");
			break;
		}
		
	} while (input!=2);
	return 0;
}