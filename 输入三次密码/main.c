#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	printf("���������룺");	
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "511725") == 0)
		{
			system("cls");
			printf("������ȷ\n");
			break;
		}
		system("cls");
		printf("����������������룺");
	}
	if (i == 3)
	{
		system("cls");
		printf("����3������������˳�\n");
	}
	return 0;
}