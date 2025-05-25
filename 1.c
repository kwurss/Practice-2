#include <stdio.h>

int main() {
    int demand;
    float km, min;
    float cost;

    printf("Введите уровень спроса (1-100): ");
    scanf("%d", &demand);
    printf("Введите длину маршрута (км): ");
    scanf("%f", &km);
    printf("Введите длительность маршрута (мин): ");
    scanf("%f", &min);

    cost = 50 + (demand * 0.5) + (km * 10) + (min * 2) + (29 + (demand - 1) * 0.4);

    printf("Стоимость поездки: %.2f рублей\n", cost);

    return 0;
}
