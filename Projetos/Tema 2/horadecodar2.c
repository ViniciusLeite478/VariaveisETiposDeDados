#include <stdio.h>

int main(){

    float temperatura, umidade;
    int estoque; 
    int estoqueMinimo = 1000;

    printf("CONTROLE DE SEGURANÇA DA EMPRESA\n");

    printf("Insira a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Insira a umidade: \n");
    scanf("%f", &umidade);

    printf("Insira a quantidade de estoque: \n");
    scanf("%d", &estoque);

    printf("SITUAÇÃO DO CONTROLE DE SEGURANÇA DA EMPRESA\n");
    
    if(temperatura >= 30){
    printf("Temperatura acima do normal!\n");
}   else {
    printf("Temperatura OK!\n");
}
    if(umidade >= 50){
    printf("Umidade elevada!\n"); 
    } else {
    printf("Umidade OK!\n");
    }
    if(estoque <= estoqueMinimo){
    printf("Estoque abaixo do normal!\n");
    } else {
    printf("Estoque OK!\n");
    }
}