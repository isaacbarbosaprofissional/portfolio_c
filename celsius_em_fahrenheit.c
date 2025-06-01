//Projeto de conversão de Celsius para Fahrenheit by Thiago e Isaac

#include <stdio.h>

void main (void)
{
	float temC, temF; //aqui definimos as variC!veis

	printf("Digite a Temperatura em graus Celsius: "); //aqui perguntamos a temperatura em celsius
	scanf("%f", &temC); //aqui definimo lemos o que foi digitado

	temF = (temC*1.8)+32; //aqui fazemos a conta de conversão

	printf("Sua temperatura em Fahrenheit: %.1f\n", temF); //aqui mostramos o resultado
}
