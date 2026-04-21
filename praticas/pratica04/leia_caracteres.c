#include <stdio.h>

int main() {
    char caracter;
    printf("Digite um caracter: ");
    scanf("%c", &caracter);
    printf("O caracter e seu respectivo codigo sao: %c / %i\n", caracter, caracter);

    return 0;
}