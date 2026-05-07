#include <stdio.h>

int main () {
    int dia = 0;

    printf("Insira um dia (1 a 7): ");
    scanf("%i", &dia);

    int dia_util = dia <= 5;
    int fim_de_semana = dia <= 7;

    if(dia_util) {
        printf("O dia %i eh um dia util\n", dia);
    } else {
        printf("O dia %i eh fim de semana\n", dia);
    }
    return 0;
}