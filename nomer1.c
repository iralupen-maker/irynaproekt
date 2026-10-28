#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float rebro;
    printf("Vvedit dovzhynu rebra kuba:");
    scanf("%f", &rebro);

    printf("S= %f", 6 * rebro * rebro);
    printf("V= %f", rebro    * rebro * rebro);

    return 0;
}