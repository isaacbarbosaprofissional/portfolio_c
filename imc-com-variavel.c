//Projeto de calcular imc by Isaac, Lucas, Thiago e Thomas

#include <stdio.h>
    float imc(float A, float B) //aqui definimos as variaveis
{
	return A/(B*B);//aqui retorna o que tem que fazer
}

void main (void)
{
	float altura1, massa1, imc_res; //aqui definimos as variaveis

	printf("Digite a sua altura em metros: "); //aqui perguntamos a altura da pessoa
	scanf("%f", &altura1); //aqui é recebida a informação da altura pelo usuário
		
	printf("Digite a seu peso em kilogramas: "); //aqui perguntamos a peso da pessoa
	scanf("%f", &massa1); //aqui é recebida a informação da peso pelo usuário
	

	imc_res = imc(massa1, altura1); //aqui fazemos a conta de de mutiplicação

	printf("Seu IMC é de: %.2f KG/m^2 \n", imc_res); //aqui mostramos o resultado
    
        if (imc_res<18.5)
	{
		printf("Sua classificação é Magreza \n"); //aqui mostramos a classificação do IMC do usuário
		printf("e sua obesidade é de grau 0\n"); //aqui mostramos o grau da obesidade
	}
	if (18.5<=imc_res && imc_res<24.9)
	{
		printf("Sua classificação é Normal \n"); //aqui mostramos a classificação do IMC do usuário
		printf("e sua obesidade é de grau 0\n"); //aqui mostramos o grau da obesidade
	}
	if (25<=imc_res && imc_res<29.9)
	{
		printf("Sua classificação é Sobrepeso \n"); //aqui mostramos a classificação do IMC do usuário
		printf("e sua obesidade é de grau I\n"); //aqui mostramos o grau da obesidade
	}
	if (30<=imc_res && imc_res<39.9)
	{
		printf("Sua classificação é Obesidade \n"); //aqui mostramos a classificação do IMC do usuário
		printf("e sua obesidade é de grau II\n"); //aqui mostramos o grau da obesidade
	}
	if (imc_res>40)
	{
		printf("Sua classificação é Obesidade Grave \n"); //aqui mostramos a classificação do IMC do usuário
		printf("e sua obesidade é de grau III\n"); //aqui mostramos o grau da obesidade
	}

}
