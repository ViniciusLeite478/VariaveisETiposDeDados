#include <stdio.h>

int main () {

char nome[50V];
 
printf("Digite seu nome completo: ");
 
fgets(nome, 22, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
 

// fgets inclui o '\n' na string, então podemos removê-lo se necessário
 

printf("Nome completo digitado: %s\n", nome);
}