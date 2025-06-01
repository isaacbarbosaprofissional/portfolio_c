#include <stdio.h>

void main(void)
{
    char bintotal[8]; // 8 bits
    char hexavaloress[] = "0123456789ABCDEF"; // Mapeamento de 0 a 15 para "0123456789ABCDEF"
    
    int decimal = 0; // Para armazenar o valor decimal

    // Solicita ao usuário que insira um número binário de 8 bits
    printf("Digite um numero binario de 8 bits: ");
    scanf("%s", bintotal); // Lê até 8 caracteres

    // Converte o número binário de 8 bits para decimal
    decimal = (bintotal[0] - '0') * 128 + (bintotal[1] - '0') * 64 + (bintotal[2] - '0') * 32 + (bintotal[3] - '0') * 16 + (bintotal[4] - '0') * 8 + (bintotal[5] - '0') * 4 + (bintotal[6] - '0') * 2 + (bintotal[7] - '0') * 1;

    // Converte o decimal para hexadecimal e exibe
    int maior_valor = decimal / 16;  // Dígito mais significativo
    int menor_valor = decimal % 16;   // Dígito menos significativo
    
    printf("Hexadecimal: %c%c\n", hexavaloress[maior_valor], hexavaloress[menor_valor]);
}
