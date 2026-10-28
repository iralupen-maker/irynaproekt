#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned char x;
	int temp;

	printf("Enter a number (0-255): ");
	scanf(" %d", &temp);
	x = temp;
	printf(" Pochatkoviy chislo: %d\n", x);
	printf("Molodschi 4 bity: %d\n", x & 0x0F);

	return 0;
}
