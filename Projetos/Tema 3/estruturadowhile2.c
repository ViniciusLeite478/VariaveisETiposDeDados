#include <stdio.h>

int main(){

    int valor = 1;

    do
{
    printf("Insira o número: \n");
    scanf("%d", valor);
    valor++;
    } while (valor >= 0);
    printf("Insira o número: \n");
    scanf("%d\n", valor);

    printf("Você Inseriu um Número Negativo - Programa Encerrado\n");



    return 0;
}