#include <stdio.h>

int main () {
    int opcoes = 0;

    printf("Escolha uma opcao: \n1 - Novo jogo\n 2 - Continuar jogo\n 3 - Ver pontuacao\n 4 - Sair\n");
    scanf("%i", &opcoes);

    int novo_jogo = opcoes == 1;
    int continuar_jogo = opcoes == 2;
    int ver_pontuacao = opcoes == 3;
    int sair = opcoes == 4;

    switch (opcoes){
        case 1: printf("Novo jogo\n"); break;
        case 2: printf("Continuar jogo\n"); break;
        case 3: printf("Ver Pontuacao\n"); break;
        case 4: printf("Sair\n"); break;
        default: printf("Opcao invalida, tente novamente\n");
    }
    return 0;
}