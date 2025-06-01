//PROJETO DE CALCULO DE MÉDIA by Thiago e Isaac

#include <stdio.h>

void main (void) {
	float nota1, nota2, nota3, nota4, media; //aqui definimos as variaveis

	printf("Digite as Notas: "); //aqui perguntamos a temperatura em celsius
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4); //aqui perguntamos a temperatura em celsius

	media = (nota1 + nota2 + nota3 + nota4) / 4; //aqui perguntamos a temperatura em celsius

	printf("Sua média é de: %.1f\n", media); //aqui perguntamos a temperatura em celsius

	if (media >= 9) { //aqui adicionamos uma condição de se caso for 9 ou maior ele será! aprova dop excelencia
		printf("APROVADO COM EXCELENCIA");
	}
	else if (media >= 6) { //aqui adicionamos uma condição de se caso for 6 ou maior ele será! aprovado
		printf("APROVADO");
	}
	else { //aqui adicionamos uma condição de se caso for menor que 6 ele será! reprovado
		printf("REPROVADO");

	}

}
