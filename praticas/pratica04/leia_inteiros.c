#include <stdio.h>

int main() {
    int valor_1;
    int valor_2;

    printf("Insira um numero inteiro: ");
    scanf("%i", &valor_1);
    printf("Insira outro numero inteiro: ");
    scanf("%i", &valor_2);
    printf("Os numeros digitados sao: %i e %i ", valor_1, valor_2);

    return 0;
}