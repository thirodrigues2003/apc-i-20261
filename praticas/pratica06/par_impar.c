#include <stdio.h>

int main () {
    int numero = 0;

    printf("Insira um numero: ");
    scanf("%i", &numero);

    int par = numero % 2 == 0;

    if (par){
        printf("O numero %i eh par\n", numero);
    } else {
        printf("O numero %i eh impar\n", numero);
    }

    return 0;
}