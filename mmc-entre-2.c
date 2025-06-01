/*Programa em C para encontrar o MMC de dois numeros*/
//By Isaac Barbosa
#include <stdio.h>
int main()
{
	int n1, n2, max;
	printf("Digite dois inteiros positivos: ");
	scanf("%d %d", &n1, &n2);

// numero maximo
	max = (n1>n2) ? n1 : n2;

// Sempre verdadeiro
	while(1)
	{
		if( max%n1==0 && max%n2==0 ) // verifica se max C) perfeitamente divisiel ou nao
		{
			printf("O MMC de dois numeros C): %d",max);
			break;
		}
		++max;
	}
	return 0;
}
