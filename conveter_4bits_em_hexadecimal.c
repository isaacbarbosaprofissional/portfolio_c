#include <stdio.h>

void main(void)
{
    char bintotal[4]; // 4 bits
    int decimal; // Para armazenar o valor decimal
    
    // Solicita ao usuário que insira um número binário de 4 bits
    printf("Digite um numero binario de 4 bits: ");
    scanf("%s", bintotal); // Lê até 4 caracteres

    // Converte o número binário para decimal
    decimal = (bintotal[0] - '0')* 8 + (bintotal[1] - '0')* 4 + (bintotal[2] - '0')* 2 + (bintotal[3] - '0')* 1;
    
    if (decimal == 10){
        printf("A");
    }
    if (decimal == 11){
        printf("B");
    }
    if (decimal == 12){
        printf("C");
    }
    if (decimal == 13){
        printf("D");
    }
    if (decimal == 14){
        printf("E");
    }
    if (decimal == 15){
        printf("F");
    }
    if (decimal <= 9){
        printf("%d", decimal);
    }
}
