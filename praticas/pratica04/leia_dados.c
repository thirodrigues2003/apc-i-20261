#include <stdio.h>

int main() {
    int idade;
    float altura;
    char sexo;
    float peso;

    printf("Insira a idade: ");
    scanf("%i", &idade);
    printf("Insira a altura: ");
    scanf("%f", &altura);
    printf("Insira o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Insira o peso: ");
    scanf("%f", &peso);

    printf("Idade: %i\n Altura: %.2f\n Sexo: %c\n Peso: %.3f\n", idade, altura, sexo, peso);

    return 0;
}