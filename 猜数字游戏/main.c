#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************************\n");
	printf("****��ʼ��Ϸ��1  �˳���Ϸ��0****\n");
	printf("********************************\n");
}

void game()
{
	int guess = 0;
	int count = 0;
	int ret = rand()%100;//����1-100�������
	while (1)
	{
		printf("�����֣�");
		scanf("%d", &guess);
		count++;
		if (guess < ret)
			printf("��С��\n");
		else if (guess>ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\nʹ�ô����ǣ�%d��\n", count);
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("ѡ��������������룡\n");
				break;
		};
	} while (input);
	return 0;
}