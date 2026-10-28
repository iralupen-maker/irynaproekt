#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int seconds;
	printf("Enter the number of seconds: ");
	scanf("%d", &seconds);

	printf("The number of seconds = %d\n", seconds);
	printf("The number of minutes = %d\n", seconds / 60);
	printf("The number of hours = %d\n", seconds / 3600);

	return 0;
}