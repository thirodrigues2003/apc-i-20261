#include <stdio.h>

int main() {

    unsigned char paises = 195;
    short int idiomas = 7100;
    long int populacao_mundial = 8274065924;
    long double proporcao_aurea = 1.61803398874989484820L;

    printf("Paises: %i\n Idiomas: %i\n Populacao Mundial: %lli\n Proporcao Aurea: %.20Lf\n", paises, idiomas, populacao_mundial, proporcao_aurea);

    return 0;
}