#include <stdio.h>

int main (){

    int numero1 = 1, resultado;
  
    printf("Antes incremento: %d\n", numero1);

    // numero1 = numero1 + 1
    // numero1 = numero1 += 1
    numero1++;
    printf("Após incremento: %d\n", numero1);

    // numero1 = numero1 - 1
    // numero1 = numero1 -= 1
    numero1--;
    printf("Após decremento: %d\n", numero1);

    resultado = numero1++;

    // Pré e Pós-Incremento
    // resultado = numero1;
    // numero1++;
    printf ("Após Pós-Incremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;

    printf ("Após Pré-Incremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

    // Pré e Pós-Decremento
    // Após o valor e decremento e antes do valor é decremento
    resultado = numero1--;
    printf ("Após Pós-Decremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf ("Após Pré-Decremento - Numero1: %d - Resultado: %d\n", numero1, resultado);
}