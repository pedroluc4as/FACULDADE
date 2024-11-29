#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 02");
    int l1, l2, l3;

    printf("Digite o num do lado x\n");
    scanf("%d",&l1);

    printf("Digite o num do lado y\n");
    scanf("%d",&l2);

    printf("Digite o num do lado z\n");
    scanf("%d",&l3);

    if (l1 == l2 && l3 == l2)
    {
        printf("equilatero, os tres lados sao iguais\n");
    }
    else if (l1 == l2 || l2 == l3 || l3 == l1)
    {
        printf("isoceles, dois lados sao iguais\n");
    }
    else

        printf("escaleno, todos os lados sao diferentes");
    }
    return 0;
}

