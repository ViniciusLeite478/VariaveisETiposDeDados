#include <stdio.h>

int main(){

    int soma1, soma2, resultado;

    printf("CALCULADORA DE SOMA DE DOIS NÚMEROS\n");
    printf("Digite o primeiro número: \n");
    scanf("%d", &soma1);

    printf("Digite o segundo número: \n");
    scanf("%d", &soma2);

    resultado = soma1 + soma2;

    printf("O resultado é: %d\n", resultado);
    
    return 0;
}