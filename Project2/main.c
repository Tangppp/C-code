#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[20] = {0};
	printf("����������:>");
	scanf("%s",password);
	while (getchar() != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��:>");
	if (getchar() == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");
	return 0;
}