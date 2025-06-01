#include <stdio.h>

void main(void)
{
    char letra[10] = "Joao";
    printf("\nA String é: %s", letra);
    printf("\nA SEGUNDA letra é: %c", letra[1]);
    letra[1] = 'U';
    printf("\nAgora a segunda letra é: %c", letra[1]);
    printf("\n\nA String resultante: %s", letra);
}
