#include <stdio.h>

int main(void) {
    int n = 7; 
    int i;
    int u0 = 0, u1 = 1, un;

    printf("Suite de Fibonacci jusqu'à U%d :\n", n - 1);

    if (n >= 1) printf("%d ", u0);
    if (n >= 2) printf("%d ", u1);

    for (i = 2; i < n; i++) {
        un = u0 + u1;
        printf("%d ", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
