#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	
	char arr1[] = "I love you who you are!";
	char arr2[] = "***********************";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
	}
	return 0;
}