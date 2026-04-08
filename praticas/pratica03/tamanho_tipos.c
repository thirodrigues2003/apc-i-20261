#include <stdio.h>

int main() {

    sizeof(char);
    printf("Char: %i\n", sizeof(char));
    
    sizeof(short int);
    printf("Short int: %i\n", sizeof(short int));

    sizeof(int);
    printf("Int: %i\n", sizeof(int));

    sizeof(long int);
    printf("Long int: %i\n", sizeof(long int));

    sizeof(long long int);
    printf("Long long int: %i\n", sizeof(long long int));

    sizeof(float);
    printf("Float: %i\n", sizeof(float));

    sizeof(double);
    printf("Double: %i\n", sizeof(double));

    sizeof(long double);
    printf("Long double: %i\n", sizeof(long double));

    return 0;
}