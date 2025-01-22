/*Escrever um algoritmo que lê uma matriz A(15,5) e a escreva (valores randômicos*).
Verifique, a seguir, quais os elementos de A que estão repetidos e quantas vezes cada
um está repetido. Escrever cada elemento repetido com uma mensagem dizendo que
o elemento aparece X vezes em A.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    system("color 5f");
    int A[15][5], cont = 0;
    srand(time(NULL));
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<5; j++)
        {
            A[i][j] = rand() % 100;
            printf("[%d] ", A[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<5; j++)
        {
            cont = 0;
            for(int x=0; x<15; x++)
            {
                for(int y=0; y<5; y++)
                {
                    if(A[i][j] == A[x][y])
                    {
                        cont++;
                    }
                }
            }
            if(cont>1)
            {
                printf("O numero %d aparece *%d vezes \n", A[i][j],cont);
            }

        }
    }

return 0;
}
