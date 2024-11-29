//Leia um número inteiro no intervalo de 1 a 7
//e escreva o respectivo dia da semana, supondo que 1
//seja Domingo e 7 sábado.
//a) Utilizando IF;
//b) Utilizando Switch.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("color 02");
    int num;
    printf("\n\n DIGITE UM NUMERO DE 1 A 7: ");
    scanf("%d",&num);
    if (num ==1)
    {
        printf("DOMINGO");
    }
    if (num ==2)
    {
        printf("SEGUNDA");
    }
    if (num ==3)
    {
        printf("TERCA");
    }
    if (num ==4)
    {
        printf("QUARTA");
    }
    if (num ==5)
    {
        printf("QUINTA");
    }
    if (num ==6)
    {
        printf("SEXTOU");
    }
    if (num ==7)
    {
        printf("SABADOU");
    }
}
