#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int search = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int mid = 0;
	scanf("%d", &search);
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < search)
			left = mid + 1;
		else if (arr[mid]>search)
			right = mid - 1;
		else
		{
			printf("Find,arr[%d]\n",mid);
			break;
		}
	}
	if (left > right)
		printf("inexsitence\n");
	return 0;
}