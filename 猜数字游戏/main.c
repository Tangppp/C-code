#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************************\n");
	printf("****开始游戏：1  退出游戏：0****\n");
	printf("********************************\n");
}

void game()
{
	int guess = 0;
	int count = 0;
	int ret = rand()%100;//生成1-100的随机数
	while (1)
	{
		printf("猜数字：");
		scanf("%d", &guess);
		count++;
		if (guess < ret)
			printf("猜小了\n");
		else if (guess>ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了！\n使用次数是：%d次\n", count);
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
		printf("请选择：");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("选择错误，请重新输入！\n");
				break;
		};
	} while (input);
	return 0;
}