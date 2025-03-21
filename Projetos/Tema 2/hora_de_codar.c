#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhaJogador, escolhaCPU;
    srand(time(0));

    printf("***Jogo de Pedra, Papel e Tesoura***\n");
    printf("Escolha uma Opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:");
    scanf("%d", &escolhaJogador);

    escolhaCPU = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
    printf("Jogador: Pedra - ");
        break;
    case 2:
    printf("Jogador: Papel - ");
        break;
    case 3:
    printf("Jogador: Tesoura - ");
        break;
    default:
    printf("Opção Inválida\n");
        break;
    }

    switch (escolhaCPU)
    {
    case 1:
    printf("CPU: Pedra\n");
        break;
    case 2:
    printf("CPU: Papel\n");
        break;
    case 3:
    printf("CPU: Tesoura\n");
        break;
    }   

    if (escolhaCPU == escolhaJogador)
    {
    printf("### Empate! ###\n");
    } else if ((escolhaJogador == 1) && (escolhaCPU == 3) 
    || (escolhaJogador == 2) && (escolhaCPU == 1) 
    || (escolhaJogador == 3) && (escolhaCPU == 2)){
    printf("### Parabéns, Você Ganhou! ###\n");
    } else {
    printf("### CPU Venceu! ###\n");
    }
    }