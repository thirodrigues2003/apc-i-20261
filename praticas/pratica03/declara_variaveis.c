#include <stdio.h>

int main () {
    int idade;
    char sexo;
    float altura;
    double peso;

    idade = 30;
    sexo = 'M';
    altura = 1.72f;
    peso = 64.310;

    printf("%s %i\n %s %c\n %s %.2f\n %s %.3f\n", "Idade: ", idade, "Sexo: ", sexo, "Altura: ", altura, "Peso: ", peso);

    return 0;
}