#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() 
{
	int num[10];
	printf("Enter 10 number : ");
	int x = 0;
	while (x < 10) {
		scanf("%d", &num[x]);
		x++;
	}
	int i = 0;
	while (i < 10) {
		if (num[i] % 2 != 0 && num[i + 2] % 2 != 0) {
			printf("%d ", num[i + 1]);
		}
		i++;
	}
	return 0;
}