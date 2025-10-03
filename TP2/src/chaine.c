/* chaine.c
 * Manipulation de chaînes de caractères sans bibliothèques externes
 * - Calculer la longueur d'une chaîne
 * - Copier une chaîne
 * - Concaténer deux chaînes
 */

#include <stdio.h>

/* Fonction pour calculer la longueur d'une chaîne */
int longueur(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

/* Fonction pour copier une chaîne dans une autre */
void copier(const char *src, char *dest) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // marquer la fin de chaîne
}

/* Fonction pour concaténer deux chaînes */
void concatener(char *dest, const char *src) {
    int i = 0;
    int j = 0;

    // se placer à la fin de la chaîne dest
    while (dest[i] != '\0') {
        i++;
    }

    // copier src à la suite de dest
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main(void) {
    char chaine1[50] = "Hello";
    char chaine2[50] = " World!";
    char copie[50];

    // Calcul de la longueur
    int len1 = longueur(chaine1);
    int len2 = longueur(chaine2);
    printf("Longueur de chaine1 = %d\n", len1);
    printf("Longueur de chaine2 = %d\n", len2);

    // Copie de chaine1 dans copie
    copier(chaine1, copie);
    printf("Copie de chaine1 : %s\n", copie);

    // Concaténation de chaine2 à chaine1
    concatener(chaine1, chaine2);
    printf("Concaténation : %s\n", chaine1);

    return 0;
}
