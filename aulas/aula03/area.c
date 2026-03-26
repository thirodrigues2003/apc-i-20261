#include <stdio.h>

int main() {
    float pi = 3.14159f;
    float raio;

    printf("Insira o raio: ");
    scanf("%f", &raio);

    float area = pi * (raio * raio);

    printf("Area = %.4f\n", area);
}