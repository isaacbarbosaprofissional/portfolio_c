//CODIGO SEQUENCIA FIBONACCI
#include <stdio.h>

void main(void)
{
	int resultado; //VARIAVEL DO RESULTADO FINAL
	int n1 = 0; //VARIAVEL DO DO
	int n2 = 1; //VARIAVEL DO RESULTADO FINAL
	int loop; //VARIAVEL DO RESULTADO FINAL

	printf("insira o numero de casas de fibonacci desejada:"); //PERGUNTA NA TELA
	scanf("%d", &loop); //SALVAR VALOR DO USUARIO

	while (loop >= 1) //SINTAXE (condiC'C#o)
	{
		resultado = n2 + n1;
		printf("%d ", resultado); //MOSTRAR RESULTADO
		n2 = n1; //PARA SOMAR VALOR ANTERIOR
		n1 = resultado; //TODOS IGUAIS PARA SOMA COM ANTERIOR
		loop = loop - 1; //SE TIVER AINDA, CONTINUA REPETICACAO
	}
}
