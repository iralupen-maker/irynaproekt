    #define _CRT_SECURE_NO_WARNINGS
    #include <stdio.h>
    /* Завдання 1: введення та виведення даних про студента. */
    int main()
    {
        char full_name[128], kurs[32];
        char subgroup;
        int age;
        float average_grade;
        double scholarship;

        printf("Napyshit vashe imya(Iryna): ");
        if (scanf(" %127[^\n]", full_name) != 1) return 1;
        printf("Vvedite grupu: ");
        if (scanf("%31s", kurs) != 1) return 1;
        printf("Vvedit nomer kursu: ");
        if (scanf(" %c", &subgroup) != 1) return 1;
        printf("Vvedit vik: ");
        if (scanf("%d", &age) != 1) return 1;
        printf("Vvedit sredniy ball (cheres krapku): ");
        if (scanf("%f", &average_grade) != 1) return 1;
        printf("Vvedit stipendiyu, grn (cheres krapku): ");
        if (scanf("%lf", &scholarship) != 1) return 1;

        printf("\nInfo about student\n");
        printf("Imya: %s\n", full_name);
        printf("Grupa: %s\n", kurs);
        printf("Pidgrupa: %c\n", subgroup);
        printf("Vik: %d\n", age);
        printf("Sredniy ball: %.2f\n", average_grade);
        printf("Stipendia: %.2f grn\n", scholarship);
        return 0;
    }
