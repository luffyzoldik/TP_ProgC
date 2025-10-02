#include <stdio.h>

int main() {
    printf("Tailles des types de donnees en octets\n");

    printf("char : %d octets\n", sizeof(char));
    printf("signed char : %d octets\n", sizeof(signed char));
    printf("unsigned char : %d octets\n\n", sizeof(unsigned char));

    printf("short : %d octets\n", sizeof(short));
    printf("signed short : %d octets\n", sizeof(signed short));
    printf("unsigned short : %d octets\n\n", sizeof(unsigned short));
    
    printf("int : %d octets\n", sizeof(int));
    printf("signed int : %d octets\n", sizeof(signed int));
    printf("unsigned int : %d octets\n\n", sizeof(unsigned int));

    printf("long int : %d octets\n", sizeof(long int));
    printf("signed long int : %d octets\n", sizeof(signed long int));
    printf("unsigned long int : %d octets\n\n", sizeof(unsigned long int));

    printf("long long int : %d octets\n", sizeof(long long int));
    printf("signed long long int : %d octets\n", sizeof(signed long long int));
    printf("unsigned long long int : %d octets\n\n", sizeof(unsigned long long int));
    
    return 0;
} 


