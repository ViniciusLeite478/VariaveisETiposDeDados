#include  <stdio.h>

int main (){

    int nota;

    printf("Digite a sua nota:");
    scanf("%d", &nota);

    if (nota <= 50){
    printf("Você tirou F\n");
    } else if (nota <= 60){
    printf("Você tirou E\n");    
    } else if (nota <= 70){
    printf("Você tirou D\n");
    } else if (nota <= 80){
    printf("Você tirou C\n");
    } else if (nota <= 90){
    printf("Você tirou B\n");
    } else {
    printf("Você tirou A\n");
    }
}