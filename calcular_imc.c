//Projeto de calcular imc by Thiago e Isaac

#include <stdio.h>

void main (void)
{
	float altura1, massa1, imc; //aqui definimos as variaveis

	printf("Digite a sua altura em metros: "); //aqui perguntamos a altura da pessoa
	scanf("%f", &altura1); //aqui definimo lemos o que foi digitado
	
		
	printf("Digite a sua massa em kilogramas: "); //aqui perguntamos a massa da pessoa
	scanf("%f", &massa1); //aqui definimo lemos o que foi digitado
	
	imc = massa1/(altura1*altura1); //aqui fazemos a conta de de mutiplicação

	printf("Seu IMC é de: %.2f KG/m^2", imc); //aqui mostramos o resultado

}
