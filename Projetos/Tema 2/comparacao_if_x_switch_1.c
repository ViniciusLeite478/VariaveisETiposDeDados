#include <stdio.h>

int main (){

    int dia;

    printf("Insira o número do dia da semana: ");
    scanf("%d", &dia);
    if (dia == 1){
    printf("Hoje é Domingo-Feira!\n");
}   else if (dia == 2){
    printf("Hoje é Segunda-Feira!\n");
}   else if (dia == 3){
    printf("Hoje é Terça-Feira!\n");
}   else if (dia == 4){
    printf("Hoje é Quarta-Feira!\n");
}   else if (dia == 5){
    printf("Hoje é Quinta-Feira!\n");
}   else if (dia == 6){
    printf("Hoje é Sexta-Feira!\n");
}   else if (dia == 7){
    printf("Hoje é Sábado-Feira!\n");
}   else {
    printf("Opção Inválida!\n");
}

}