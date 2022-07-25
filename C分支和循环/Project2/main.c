#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int result = 1;
	int n = 0;
	int i = 0;
	unsigned long int s = 0;
	printf("n = ");
	scanf("%d", &n);
	if (n == 0)
		printf("s=1\n");
	else if (n > 25)
		printf("³¬³ö·¶Î§\n");
	else
	{
		for (i = 1; i <= n; i++)
		{
			result *= i;
			s += result;
		}
		printf("s=%d\n", s);
	}
	return 0;
}