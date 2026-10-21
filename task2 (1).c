#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Завдання 2: перетворення коду ASCII на символ. */
int main()
{
    int code;
    printf("Zavdannya 2. ASCII\n");
    printf("Vvedit cile chyslo: ");
    if (scanf("%d", &code) != 1) return 1;

    printf("Kod %d u tablyci ASCII ce symvol: %c\n", code, (char)code);

    return 0;
}
