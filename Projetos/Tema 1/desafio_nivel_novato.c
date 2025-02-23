#include <stdio.h>

int main(){

    char estado;
    char codigocarta[10];
    char nomecidade[20];
    int populacao;
    float area;
    float pib;
    int pturistico;

    printf("SUPER TRUNFO\n");
    printf("Carta 01: \n");
    printf("Insira Uma Letra De A a H:");
    scanf("%c", estado);

    printf("Insira A Letra Escolhida Com Um Número De 01 A 04: ");
    scanf("%s", codigocarta);

    printf("Insira O Nome Da Cidade: ");
    scanf("%s", nomecidade);

    printf("Insira O Número De Habitantes Da Cidade: ");
    scanf("%d", populacao);

    printf("Insira A Área Da Cidade Em Km²: ");
    scanf("%f", area);

    printf("Insira O PIB Da Cidade: ");
    scanf("%f", pib);

    printf("Insira A Quantidade de Pontos Turísticos Da Cidade: ");
    scanf("%i", pturistico);

    printf("Você Cadastrou a Carta 01");
}