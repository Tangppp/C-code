#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 3600");
	printf("����2���Ӻ�ػ�!\n�������Ǵ�SB ȡ���ػ�\n");
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "���Ǵ�SB") == 0)
		{
			system("shutdown -a");
			break;
		}
		printf("����������������룡\n");
	}
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("����2���Ӻ�ػ�\n�������Ǵ�SB ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "���Ǵ�SB") == 0)
//		system("shutdown -a");
//	else
//		goto again;
	return 0;
}