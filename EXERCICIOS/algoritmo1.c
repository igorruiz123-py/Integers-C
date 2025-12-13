#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

/*
Escreva um programa que receba um número
natural n e imprima as potências n2, n3, n4, n5 etc. O programa só deve parar quando
não for possível armazenar uma potência em um unsigned int.
*/

int main(){

    unsigned int num;
    unsigned int exp = 2;
    unsigned int pot;

    printf("Enter number: ");
    scanf(" %u", &num);

    pot = num;

    while (true){

        if (pot > UINT_MAX / num){
            printf("Limit is off");
            break;
        }

        pot *= exp;
        printf("%u ^ %u = %u  \n", num, exp, pot);
        exp++;
    }
}