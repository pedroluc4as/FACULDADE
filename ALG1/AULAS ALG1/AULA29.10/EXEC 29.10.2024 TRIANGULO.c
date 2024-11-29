//Tarefa ALG1 29/10/2024
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 010");
    int l1=13, l2, l3;

    if (l1 == l2 && l3 == l2)
    {
        printf("equilatero, os tres lados sao iguais\n");
    }
    else if (l1 == l2 || l2 == l3 || l3 == l1)
    {
        printf("isoceles, dois lados sao iguais\n");
    }
    else
    {
        printf("escaleno, todos os lados sao diferentes");
    }
    return 0;
}
