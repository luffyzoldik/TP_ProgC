#include <stdio.h>

void print_binary(unsigned int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int bits[64];  
    int i = 0;

    while (n > 0) {
        bits[i++] = n % 2;   
        n /= 2;              
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main(void) {
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        printf("%5d -> ", valeurs[i]);
        print_binary(valeurs[i]);
        printf("\n");
    }

    return 0;
}
