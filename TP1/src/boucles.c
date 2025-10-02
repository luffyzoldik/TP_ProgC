
#include <stdio.h>

int main() {
    int somme = 0;
    
    for (int i = 1; i <= 1000; i++) {
        
        if (i % 11 == 0) {
            continue;
        }
    
        if (i % 5 == 0 || i % 7 == 0) {
            if (somme + i > 5000) {
                printf("La somme va depasser 5000, on arrete !\n");
                break;
            }
            somme = somme + i;
        }
    }
    
    printf("Somme finale : %d\n", somme);
    
    return 0;
}
