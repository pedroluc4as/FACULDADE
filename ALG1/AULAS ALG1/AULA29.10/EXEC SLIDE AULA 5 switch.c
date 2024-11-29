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
    printf("\nDIGITE UM NUMERO DE 1 A 7 AE MANO: ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("DOMINGO");
        break;

    case 2:
        printf("SEGUNDA");
        break;

    case 3:
        printf("TERCA");
        break;

    case 4:
        printf("QUARTA");
        break;

    case 5:
        printf("QUINTA");
        break;

    case 6:
        printf("SEXTOU");
        break;

    case 7:
        printf("SABADOU");
        break;

    default:
        printf("DIGITE UM NUMERO DE 1 (UM) A 7 (SETE), SE QUER QUE DESENHA?");
        break;

    }
    return 0;

}
