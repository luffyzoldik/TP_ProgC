#include <stdio.h>
#include <math.h>

int main(void){
    double pi = 3.1416;
    double r = 6;
    printf("l'air du cercle = %.4f\n", pi * r * r);
    printf("Le perimetre du cercle = %.4f\n", pi * (r + r));
    return 0;
}
