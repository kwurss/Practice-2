#include <stdio.h>
int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            int table = i * j;
            if (table < 10) {
                printf(" %d", table);
            } else {
                printf("%d", table);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
