
#include <stdio.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a; 
};

int main(void) {
  
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff}, 
        {0xff, 0x00, 0x00, 0xff}, 
        {0x00, 0xff, 0x00, 0xff}, 
        {0x00, 0x00, 0xff, 0xff}, 
        {0x12, 0x34, 0x56, 0xff}, 
        {0xab, 0xcd, 0xef, 0xff},
        {0x80, 0x80, 0x80, 0xff}, 
        {0xff, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0x00, 0xff} 
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf(" Rouge : %u\n", couleurs[i].r);
        printf(" Vert  : %u\n", couleurs[i].g);
        printf(" Bleu  : %u\n", couleurs[i].b);
        printf(" Alpha : %u\n", couleurs[i].a);
    }

    return 0;
}
