#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("CONTROLE DE CONDIÇÕES DE SEGURANÇA DA EMPRESA\n");

    printf("Insira a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Insira a umidade: \n");
    scanf("%f", &umidade);
    printf("Insira o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
    printf("A temperatura está alta.\n");
    } else {
    printf("A temperatura está dentro da normalidade.\n");
    }
    if(umidade > 50){
    printf("A umidade está alta.\n");
    } else {
    printf("A umidade está dentro da normalidade.\n");        
    }
    if(estoque < estoqueMinimo){
    printf("O Estoque está abaixo do mínimo.\n");
    } else {
    printf("O Estoque está dentro da normalidade.\n");
    }
}