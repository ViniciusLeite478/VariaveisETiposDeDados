#include  <stdio.h>

int main (){

float nota1, nota2, nota3;
float media;

// Linha de apresentação do programa
printf("***PROGRAMA DE CÁULCULO DE MÉDIA***\n");
printf("Você pode fazer a média de até 3 notas\n");
printf("\n");

// Solicitação de dados do usuário
printf("Insira a primeira nota:\n");
scanf("%f", &nota1);

printf("Insira a segunda nota:\n");
scanf("%f", &nota2);

printf("Insira a terceira nota:\n");
scanf("%f", &nota3);

// Cálculo das notas
media = (nota1 + nota2 + nota3) / 3;

// Impressão do resultado para o usuário
printf("A média é: %.1f\n", media);
}