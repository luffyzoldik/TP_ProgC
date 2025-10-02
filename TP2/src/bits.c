#include <stdio.h>

int main(void) {
    unsigned int d = 0xF0012500; 
    int nb_bits = sizeof(d) * 8;  
    int pos1 = 4;
    int pos2 = 20;

  
    int bit_index1 = nb_bits - pos1;
    int bit_index2 = nb_bits - pos2;

    int bit1 = (d >> bit_index1) & 1;
    int bit2 = (d >> bit_index2) & 1;

    if (bit1 == 1 && bit2 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}


