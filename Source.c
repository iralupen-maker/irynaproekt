#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char studName[50];
    char literaGrupy;
    int vik;
    float bal;
    double stypik;

    printf("Zavdannya 1. Dani studenta\n\n");

    printf("Napyshit vashe imya (Iryna): ");
    scanf("%49s", studName);

    int temp;
    while ((temp = getchar()) != '\n' && temp != EOF) {}

    printf("Vvedit bukvu grupy: ");
    scanf("%c", &literaGrupy);

    printf("Skilky vam rokiv: ");
    scanf("%d", &vik);

    printf("Seredniy bal: ");
    scanf("%f", &bal);

    printf("Rozmir stypendii: ");
    scanf("%lf", &stypik);

    printf("\n--- RESULTAT ---\n");
    printf("Imya: %s\n", studName);
    printf("Grupa: %c\n", literaGrupy);
    printf("Vik: %d\n", vik);
    printf("Bal: %.2f\n", bal);
    printf("Stypendiya: %.2lf\n\n", stypik);

    int chyslo;
    printf("Zavdannya 2. ASCII\n");
    printf("Vvedit cile chyslo: ");
    scanf("%d", &chyslo);

    printf("Kod %d u tablyci ASCII ce symvol: %c\n", chyslo, (char)chyslo);

    return 0;
}