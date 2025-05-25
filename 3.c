#include <stdio.h>

int main() {
    int X;

    printf("Введите количество уровней ёлочки: ");
    scanf("%d", &X);

    if (X < 1) {
        printf("Количество уровней должно быть больше или равно 1.\n");
        return 1;
    }

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < X - 1; i++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}
