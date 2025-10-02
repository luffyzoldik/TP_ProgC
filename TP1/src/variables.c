#include <stdio.h>

int main(void) {
    signed char sc = -100;
    unsigned char uc = 200;

    signed short ss = -30000;
    unsigned short us = 60000;

    signed int si = -123456;
    unsigned int ui = 123456;

    signed long sl = -123456789L;
    unsigned long ul = 123456789UL;

    signed long long sll = -1234567890123LL;
    unsigned long long ull = 1234567890123ULL;

    float f = 3.14f;

    double d = 2.718281828;

    long double ld = 1.6180339887L;

    printf("signed char        : %d\n", sc);
    printf("unsigned char      : %u\n", uc);

    printf("signed short       : %d\n", ss);
    printf("unsigned short     : %u\n", us);

    printf("signed int         : %d\n", si);
    printf("unsigned int       : %u\n", ui);

    printf("signed long        : %ld\n", sl);
    printf("unsigned long      : %lu\n", ul);

    printf("signed long long   : %lld\n", sll);
    printf("unsigned long long : %llu\n", ull);

    printf("float              : %f\n", f);
    printf("double             : %lf\n", d);
    printf("long double        : %Lf\n", ld);

    return 0;
}
