#include <stdio.h>

int main ()
{
    float num1, num2, soma;

    printf("INSIRA O PRIMEIRO NUMERO:");
    scanf("%f", &num1);

    printf("INSIRA O SEGUNDO NUMERO:");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("Resultado da Soma: %f", soma);


    return 0;
}
