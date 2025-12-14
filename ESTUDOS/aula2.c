#include <stdio.h>
#include <string.h>

// REPRESENTAÇÃO DE DADOS E OVERFLOW

/*
Os dados, sejam strings ou caractéres precisam de se encaixar em padrões de bits para poderem ser armazenados na stack da memória.

É necessário se atendar ao tamanho do dado que será armazenado a um tipo específico. Por exemplo:

O número 400 é representado em 9 bits (110010000), então ele precisa ser armazenado em um tipo de dado que suporte
mais de um byte de tamanho, caso contrário, o processo de armazenamento de do dado 400 sofrerá overflow e será perdido 
dados.

*/

// Função que converte decimal para binários
void ConvertToBinary(int num, char *arr){

    int len = 0;

    while (num > 0){

        if (num % 2 == 0){
            arr[len] = '0';
        }
        else {
            arr[len] = '1';
        }

        num /= 2;
        len++;
    }

    arr[len] = '\0';

    int middle = len / 2;
    char temp;

    for (int i = 0; i < middle; i++){
        temp = arr[i];
        arr[i] = arr[len - i -1];
        arr[len - i -1] = temp;
    }
}

int main(){

    int var;
    double boo;
    char foo;
    float temp;

    // Tamanho em bytes dos tipos de dados int, double, char, float
    int LenVar = sizeof(var);
    int LenBoo = sizeof(boo);
    int LenFoo = sizeof(foo);
    int LenTemp = sizeof(temp);

    printf("INT: %d Bytes \n", LenVar);
    printf("DOUBLE: %d Bytes \n", LenBoo);
    printf("CHAR: %d Bytes \n", LenFoo);
    printf("FLOAT: %d Bytes \n", LenTemp);
    
    printf("\n");

    char arr[256];
    int num = 0;

    printf("Enter decimal number: ");
    scanf(" %d", &num);

    ConvertToBinary(num, arr);

    // Contagem de bits do vetor de binário
    int len = strlen(arr);

    printf("\n");

    if (len <= 8){
        printf("The decimal number: %d to binary is %s \n", num, arr);
        printf("The binary number: %s has %d bits \n", arr, len);
        printf("decimal number: %d has %d bits, so it fits in data type CHAR \n", num, len);
    }

    else if (len >= 8){
        printf("The decimal number: %d to binary is %s \n", num, arr);
        printf("The binary number: %s has %d bits \n", arr, len);
        printf("decimal number: %d has %d bits, so it fits in data type FLOAT and INT \n", num, len);
    }

}