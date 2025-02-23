#include <stdio.h>


int main(){

    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
  
    printf("Insira a sua altura: \n");
    scanf("%f", &altura);

    printf("Insira o seu nome: \n");
    scanf("%s", &nome);

    printf("Insira a sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do Aluno: %s  - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);


    return 0;


}