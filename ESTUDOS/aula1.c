#include <stdio.h>

// NÚMEROS NATURAIS E INTEIROS

/*
A memória de qualquer computador é uma sequência de bytes. Cada byte
consiste em 8 bits e portanto tem 256 possíveis valores: 00000000; 00000001; : : : ;
11111110; 11111111: Este apêndice procura mostrar como os números naturais
(0, 1, 2, 3 etc.) e os números inteiros (positivos e negativos) são representados
por sequências de bytes na memória do computador.
O ponto de partida da representação é a notação binária: cada sequência
de bits representa o resultado da soma das potências de 2 que correspondem
aos bits 1. Por exemplo, a sequência 010011 representa o número 19, pois
0 x 2^5 + 1 x 2^4 + 0 x 2^3 + 0 x 2^2 + 1 x 2^1 + 1 x 2^0 = 19.

Na linguagem C, os números naturais são conhecidos como "inteiros sem sinal".
Para declarar uma variável n deste tipo, diga:

unsigned int n;

Seu especificador é "%u"

Um unsigned int é armazenado em s bytes consecutivos, sendo s o valor da
expressão sizeof (unsigned int).

Em alguns computadores, s vale 4 e assim um unsigned int tem 2^32
valores, que representam os números 0 a 4294967295.

*/

int main(){

    unsigned int var = 10;
    int size = sizeof(var);

    printf("value of var: %u \n", var);
    printf("size of var: %d bytes \n", size); // Números naturais possuem 4 bytes de tamanho 

    printf("\n");

    // Números de possibilidades de combinações para "0" e "1" possíveis para 1 byte
    int x = 2;
    int y = 8;
    int z = 1;

    for (int i = 0; i < y; i++){
        z *= x;
    }

    printf("number of combinations for 1 byte: %d \n", z);

    printf("\n");

    // Números de possibilidades de combinações para "0" e "1" possíveis para 4 bytes
    unsigned long long a = 2;
    int b = 32;
    unsigned long long c = 1;

    for (int i = 0; i < b; i++){
        c *= a;
    }

    printf("number of combinations for 4 byte: %llu \n", c);
}

