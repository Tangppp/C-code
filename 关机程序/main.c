#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 3600");
	printf("将在2分钟后关机!\n输入我是大SB 取消关机\n");
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "我是大SB") == 0)
		{
			system("shutdown -a");
			break;
		}
		printf("输入错误，请重新输入！\n");
	}
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("将在2分钟后关机\n输入我是大SB 取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是大SB") == 0)
//		system("shutdown -a");
//	else
//		goto again;
	return 0;
}