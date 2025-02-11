#include <stdio.h>

int main(){

int idade;
float altura;
char opcao;

printf("Entre com a sua idade\n");
scanf("%d", &idade);
printf("Idade: %d\n", idade);
printf("Entre com a sua altura\n");
scanf("%f", &altura);
printf("Altura: %f\n", altura);
printf("Digite a primeira letra do seu nome\n");
scanf(" %c", &opcao);
printf("Primeira Letra do Seu Nome: %c\n", opcao);

}