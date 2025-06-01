#include <stdio.h>

void main(void) {
    int a, b, resultado = 0;

    // Entrada dos números
    printf("Digite dois números inteiros maiores que 1: ");
    scanf("%d %d", &a, &b);

    // Validação
    if (a <= 1 || b <= 1) {
        printf("Erro: os números devem ser maiores que 1.\n");
    }

    // Multiplicação via soma
    while (b > 0) {
        resultado += a; // soma 'a' no resultado
        b--;            // decrementa b
    }
    printf("Resultado da multiplicacao: %d\n", resultado);

}
