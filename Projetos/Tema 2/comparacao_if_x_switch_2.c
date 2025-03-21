#include <stdio.h>

int main (){

    int dia;

    printf("Insira o número do dia da semana: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
    printf("Hoje é Domingo-Feira!\n");
        break;
    case 2:
    printf("Hoje é Segunda-Feira!\n");
        break;
    case 3:
    printf("Hoje é Terça-Feira!\n");
        break;
    case 4:
    printf("Hoje é Quarta-Feira!\n");
        break;
    case 5:
    printf("Hoje é Quinta-Feira!\n");
        break;
    case 6:
    printf("Hoje é Sexta-Feira!\n");
        break;
    case 7:
    printf("Hoje é Sábado-Feira!\n");
        break;
    default:
    printf("Opção Inválida!\n");
        break;
    }
}