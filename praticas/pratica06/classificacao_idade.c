#include <stdio.h>

int main () {
    int idade = 0;

    printf("Insira sua idade: ");
    scanf("%i", &idade);

    int crianca = idade <= 12;
    int adolescente = idade <= 17;
    int adulto = idade <= 64;
    int idoso = idade >= 65;
    
    if (crianca){
        printf("Voce tem %i anos, logo eh crianca\n", idade);
    } else if(adolescente){
        printf("Voce tem %i anos, logo eh adolescente\n", idade);     
    } else if (adulto) {
        printf("Voce tem %i anos, logo eh adulto\n", idade);
    } else if (idoso) {
        printf("Voce tem %i anos, logo eh idoso\n", idade);
    }

    return 0;
}