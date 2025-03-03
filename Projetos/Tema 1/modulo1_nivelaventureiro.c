#include <stdio.h>

int main (){

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("Insira o primeiro número: \n");
scanf("%d", &numero1);
printf("Insira o segundo número: \n");
scanf("%d", &numero2);

// Operação soma
soma = numero1 + numero2;

// Operação subtração
subtracao = numero1 - numero2;

// Operação multiplicação
multiplicacao = numero1 * numero2;

// Operação divisão
divisao = numero1 / numero2;

printf("A Soma é: %d\n", soma);
printf("A Substração é: %d\n", subtracao);
printf("A Multiplicação é: %d\n", multiplicacao);
printf("A Divisão é: %d\n", divisao);
}