


#include <stdio.h>

int main(void) {
    int n = 5;     
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            putchar(' ');
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        putchar('\n');
    }

    printf("Voici ta pyramide de hauter %d.\n", n);
    return 0;
}

