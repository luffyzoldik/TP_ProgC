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

    signed char *psc = &sc;
    unsigned char *puc = &uc;
    signed short *pss = &ss;
    unsigned short *pus = &us;
    signed int *psi = &si;
    unsigned int *pui = &ui;
    signed long *psl = &sl;
    unsigned long *pul = &ul;
    signed long long *psll = &sll;
    unsigned long long *pull = &ull;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;
    printf("Adresse sc : %p, Valeur : %02x\n", (void*)psc, (unsigned char)sc);
    printf("Adresse uc : %p, Valeur : %02x\n", (void*)puc, uc);
    printf("Adresse ss : %p, Valeur : %04x\n", (void*)pss, (unsigned short)ss);
    printf("Adresse us : %p, Valeur : %04x\n", (void*)pus, us);
    printf("Adresse si : %p, Valeur : %08x\n", (void*)psi, si);
    printf("Adresse ui : %p, Valeur : %08x\n", (void*)pui, ui);
    printf("Adresse sl : %p, Valeur : %08lx\n", (void*)psl, sl);
    printf("Adresse ul : %p, Valeur : %08lx\n", (void*)pul, ul);
    printf("Adresse sll: %p, Valeur : %016llx\n", (void*)psll, sll);
    printf("Adresse ull: %p, Valeur : %016llx\n", (void*)pull, ull);

    unsigned int *pi_f = (unsigned int*)pf;
    unsigned long long *pi_d = (unsigned long long*)pd;
    unsigned long long *pi_ld = (unsigned long long*)pld;

    printf("Adresse f  : %p, Valeur : %08x\n", (void*)pf, *pi_f);
    printf("Adresse d  : %p, Valeur : %016llx\n", (void*)pd, *pi_d);
    printf("Adresse ld : %p, Valeur : %016llx (partie basse)\n", (void*)pld, *pi_ld);

    (*psc)++;
    (*puc)--;
    (*pss)++;
    (*pus)--;
    (*psi)--;
    (*pui)++;
    (*psl)--;
    (*pul)++;
    (*psll)--;
    (*pull)++;
    *pf = 1.0f;
    *pd = 1.0;
    *pld = 1.0L;

    printf("\n===== Après manipulation =====\n");
    printf("Adresse sc : %p, Valeur : %02x\n", (void*)psc, (unsigned char)sc);
    printf("Adresse uc : %p, Valeur : %02x\n", (void*)puc, uc);
    printf("Adresse ss : %p, Valeur : %04x\n", (void*)pss, (unsigned short)ss);
    printf("Adresse us : %p, Valeur : %04x\n", (void*)pus, us);
    printf("Adresse si : %p, Valeur : %08x\n", (void*)psi, si);
    printf("Adresse ui : %p, Valeur : %08x\n", (void*)pui, ui);
    printf("Adresse sl : %p, Valeur : %08lx\n", (void*)psl, sl);
    printf("Adresse ul : %p, Valeur : %08lx\n", (void*)pul, ul);
    printf("Adresse sll: %p, Valeur : %016llx\n", (void*)psll, sll);
    printf("Adresse ull: %p, Valeur : %016llx\n", (void*)pull, ull);

    printf("Adresse f  : %p, Valeur : %08x\n", (void*)pf, *pi_f);
    printf("Adresse d  : %p, Valeur : %016llx\n", (void*)pd, *pi_d);
    printf("Adresse ld : %p, Valeur : %016llx (partie basse)\n", (void*)pld, *pi_ld);

    return 0;
}
