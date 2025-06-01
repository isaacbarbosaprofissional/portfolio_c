//Projeto de calcular media by Arthur e Isaac
#include <stdio.h>
    float media(float A, float B) //aqui definimos as variaveis
{
	return(A+B)/2;//aqui retorna o que tem que fazer
}


void main (void) {
	float nota1, nota2, MF; // Declaracao das variaveis local

  	 printf("Digite as Notas: "); //aqui perguntamos a temperatura em celsius
  	 scanf("%f %f", &nota1, &nota2); //aqui perguntamos a temperatura em celsius

	MF = media(nota1, nota2); //media dentro do programa
     printf("Sua media e de: %.1f\n", MF); //aqui perguntamos a temperatura em celsius 
}
