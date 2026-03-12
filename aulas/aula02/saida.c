#include <stdio.h>

int main() {

    printf("estou usando a funcao printf()\n");

    printf("Programar em C eh TOP!\n");

    printf("%i\n", 10+10);

    printf("%f\n", 3.1415);

//Para definir a quantidade de casas decimais, inserir "%.xf"

    printf("%.4f", 3.1415);

    printf("%11i\n", 10+10);

    printf("%s", "isso e uma string\n");

    return 0;
}