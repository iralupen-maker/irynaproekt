#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int nomer, d1, d2, d3, d4, d5;
	printf("Enter a five-digit number: ");
	scanf("%d", &nomer);
	d1 = nomer / 10000;
	d2 = (nomer / 1000) % 10;
	d3 = (nomer / 100) % 10;
	d4 = (nomer / 10) % 10;
	d5 = nomer % 10;
	printf(" Suma (1,3,5) = %d\n", d1 + d3 + d5);
	printf(" Dobutok (2,4) = %d\n", d2 * d4);
	return 0;
}