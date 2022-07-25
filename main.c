#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	printf("请输入密码：");	
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "511725") == 0)
		{
			system("cls");
			printf("密码正确\n");
			break;
		}
		system("cls");
		printf("密码错误，请重新输入：");
	}
	if (i == 3)
	{
		system("cls");
		printf("输入3次密码错误，请退出\n");
	}
	return 0;
}