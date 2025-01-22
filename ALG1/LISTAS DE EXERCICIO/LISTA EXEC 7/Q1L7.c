//Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
//a. D/a linha 4 de M
//b. Da coluna 2 de M
//c. Da diagonal principal de M
//d. De todos os elementos da matriz M
//OBS: Escrever essas somas e a matriz.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 5f");
    int M[5][5]={{1,0,0,0,0},{0,2,0,0,0},{0,0,3,0,0},{0,0,0,4,0},{0,0,0,0,5}};
    int somal4 = 0, somac2 = 0, somadp = 0, somat = 0;
    for(int i=0; i<5; i++)
    {
        printf("\n");
        somal4 = somal4 + M[3][i];
        somac2 = somac2 + M[i][1];
        for(int j=0; j<5; j++)
        {
            printf(" %d", M[i][j]);
            if(i == j)
            {
                somadp = somadp + M[i][j];

            }
            somat = somat + M[i][j];
        }

    }
    printf("\n\nSoma linha 4 = %d \n",somal4);
    printf("Soma coluna 2 = %d \n",somac2);
    printf("Soma diagonal principal = %d \n",somadp);
    printf("Soma matriz M = %d \n",somat);


return 0;
}
