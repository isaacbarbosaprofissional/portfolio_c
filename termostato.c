//Projeto de conversao de Celsius para Fahrenheit by Arthur e (termostato)

#include <stdio.h>
float temF(float C) //aqui definimos as variaveis
{
	return(C*1.8)+32;//aqui faz a conta em si
}

void main (void)
{
	float temC, temFinal; //aqui definimos as variaveis

	printf("Digite a Temperatura em graus Celsius: "); //aqui perguntamos a temperatura em celsius
	scanf("%f", &temC); //aqui definimo lemos o que foi digitado

	temFinal = temF(temC);//aplica o valor de retorno

	printf("Sua temperatura em Fahrenheit: %.1f\n", temFinal); //aqui mostramos o resultado

	if (temC<22)
	{
		printf("Ativar aquecimento \n"); //aqui mostramos que precisa aquecer
	}
	if (temC>22)
	{
		printf("Ativar resfriamento \n"); //aqui mostramos que precisa resfriar
	}
	if (temC == 22)
	{
		printf("Sua temperatura esta perfeita \n"); //aqui mostramos que ta perfeito
	}
}
