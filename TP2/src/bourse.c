
#include <stdio.h>

int main(void) {
    int cours[] = {1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668,
                   2282, 1689, 2174, 2173, 2290, 1883, 1974};
    int n = sizeof(cours) / sizeof(cours[0]);

    int max_precedent = cours[0];
    int perte_max = 0;

    for (int i = 1; i < n; i++) {
        int perte = cours[i] - max_precedent;
        if (perte < perte_max) {
            perte_max = perte;
        }
        if (cours[i] > max_precedent) {
            max_precedent = cours[i];
        }
    }

    printf("La plus grande perte possible est : %d\n", -perte_max);

    return 0;
}

