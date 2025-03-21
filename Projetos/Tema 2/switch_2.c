#include <stdio.h>

int main (){

    int opcao;
    float deposito, saque, agencia, saldo = 1000;
    char banco[20];

    printf("Escolha uma opção:\n");
    printf("1. Verificar Saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("O seu saldo é: R$ %2.f \n", saldo);
        break;
    case 2:
    printf("Digite o banco que você deseja depositar:\n");
    scanf("%s", &banco);
    printf("Digite o número da agência\n");
    scanf("%f", &agencia);
    printf("Digite o valor do depósito: \n");
    scanf("%f", &deposito);
        break;
    case 3:
    printf("Digite o valor do saque: \n");
    scanf("%f", &saque);
        break;
    default:
    printf("Opção inválida!\n");
        break;
    }


}