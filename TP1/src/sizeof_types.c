#include <stdio.h>

int main() {
    printf("Tailles des types de donnees en octets\n");

    printf("char : %d octets\n", sizeof(char));
    printf("signed char : %d octets\n", sizeof(signed char));
    printf("unsigned char : %d octets\n\n", sizeof(unsigned char));

    printf("short : %d octets\n", sizeof(short));
    printf("signed short : %d octets\n", sizeof(signed short));
    printf("unsigned short : %d octets\n", sizeof(unsigned short));
    return 0;
} 
