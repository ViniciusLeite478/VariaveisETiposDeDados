#include <stdio.h>

int main (){

int numero;

    printf("Insira um número:\n");
    scanf("%d", &numero);

    if (numero > 0){
    if (numero % 2 == 0) {
    printf("Número Par!\n");
    } else {
    printf("Número Ímpar!\n");
    }
    printf("Número Positivo!\n");
    } else if (numero == 0) {
    printf("Número é Zero!\n");
    } else {
    printf ("Número é Negativo!\n");
    }
}