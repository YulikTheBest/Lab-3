#include <stdio.h>

int main() {
    int month;

    printf("Введи номер місяця (1-12)");
    scanf("%d", &month);

    switch (month) {
        case 12:
        case 1:
        case 2:
            printf("Зима\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Весна\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Літо\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Осінь\n");
            break;
        default:
            printf("Неправильний номер місяця!\n");
    }

    return 0;
}
