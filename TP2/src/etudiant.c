
#include <stdio.h>

int main(void) {
    char noms[5][30] = {
        "Durand", "Martin", "Dupont", "Nguyen", "Lopez"
    };
    char prenoms[5][30] = {
        "Alice", "Bob", "Claire", "David", "Emma"
    };
    char adresses[5][100] = {
        "12 rue des Lilas, Paris",
        "5 avenue Victor Hugo, Lyon",
        "8 boulevard de la Paix, Marseille",
        "14 chemin Vert, Lille",
        "3 place Bellecour, Lyon"
    };

    float notes_prog[5] = {15.5, 12.0, 18.0, 9.5, 14.0};
    float notes_sys[5]  = {14.0, 11.5, 17.0, 10.0, 13.5};
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf(" Nom      : %s\n", noms[i]);
        printf(" Prénom   : %s\n", prenoms[i]);
        printf(" Adresse  : %s\n", adresses[i]);
        printf(" Note C   : %.2f\n", notes_prog[i]);
        printf(" Note SE  : %.2f\n", notes_sys[i]);
    }

    return 0;
}
