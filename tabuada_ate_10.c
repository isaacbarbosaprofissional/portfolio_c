//Código tabuada by Isaac, Lucas, Thiago, Thomas
#include <stdio.h>

void main(void)
{
    int numero, i, resultado; // Declara a variavel 'numero', 'i' e 'resultado' como valor inteiro

	printf("Digite um numero: "); // Exibe a mensagem para inserir um numero
	scanf("%d", &numero); // Le o numero
	//Faz um loop de 1 a 10 e vai mostrando os resultados de acordo com o
	//numero digitado pelo usuario
	for(i=1; i<=10; i++) {
		resultado = numero * i; //efetua o calculo do resultado
		printf("%d x %d = %d\n", numero, i, resultado); // mostra os resultado finais
	}
}