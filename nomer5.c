#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	unsigned int a, b;
	printf(" Vvedit dva besnakovi chysla (a ta b) : ");
	scanf("%u %u", &a, &b);	
	printf(" a & b= %u\n", a & b);
	printf(" a | b= %u\n", a | b);
	printf(" a ^ b= %u\n", a ^ b);
	return 0;
}