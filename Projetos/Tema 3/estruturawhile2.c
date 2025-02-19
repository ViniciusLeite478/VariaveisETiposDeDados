#include <stdio.h>

int main (){

int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    while (num >= 0)
{
    printf("Você digitou: %d\n", num);
    printf("Digite um número: \n");
    scanf("%d", &num);
}
    printf("Número Negativo - Programa Encerrado\n");

}