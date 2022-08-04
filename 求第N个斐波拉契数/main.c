#define  _CRT_SECURE_NO_WARNINGS 1
//ì³²¨À­ÆõÊý(Fiboracci number)£º1 1 2 3 5 8 13 21 34 55......
#include <stdio.h>
int Fib(int n)
{
	/*
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1)+Fib(n - 2);*/
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}