#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((a >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}