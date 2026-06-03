#include <stdio.h>

int main() {
    float nota_01;
    float nota_02;

    printf("Digite a nota 01 do aluno: ");
    scanf("%f", &nota_01);
    printf("Digite a nota 02 do aluno: ");
    scanf("%f", &nota_02);
    printf("Nota 01: %.2f\n Nota 02: %.2f\n", nota_01, nota_02);

    return 0;
}