

#include <stdio.h>

int longueur(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}
void copier(const char *src, char *dest) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}

void concatener(char *dest, const char *src) {
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
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

    int len1 = longueur(chaine1);
    int len2 = longueur(chaine2);
    printf("Longueur de chaine1 = %d\n", len1);
    printf("Longueur de chaine2 = %d\n", len2);

    copier(chaine1, copie);
    printf("Copie de chaine1 : %s\n", copie);

    concatener(chaine1, chaine2);
    printf("Concaténation : %s\n", chaine1);

    return 0;
}

