#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;

    if (a > 0 && b > 0)
    {
    printf("Entre A e B: Os dois números são positivos\n");
    } else {
    printf("Entre A e B: Pelo menos um dos números é negativo\n");
    }

    int c = -15;
    int d = -30;

    if (c > 0 || d > 0)
    {
    printf("Entre C e D: Pelo menos um dos números é positivo\n");
    } else {
    printf("Entre C e D: Os dois números são negativos\n");
    }

    int e = -1;

    if (!(e > 0)) 
    {
    printf("A variável E é negativa\n");
    } else {
    printf("A variável E é positiva\n");
    }
    
    if ((a >= 0 || b >= 0) && (c <= 0 || d <= 0) && e <= 0) {
    printf ("Todos nos conformes\n"); }
    else {
    printf ("Algo de errado não está certo\n");
    }
}