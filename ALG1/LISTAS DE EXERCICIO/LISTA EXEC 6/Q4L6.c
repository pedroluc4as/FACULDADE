//4. Dado um vetor A de tamanho 10 e do tipo inteiro fa�a um programa em C que, utilizando um la�o de repeti��o, insira os valores de 21 a 30 nesse vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
    {
    setlocale(LC_ALL, "Portuguese");
        int vetA[10];
        for( int i = 0; i<10; i++){
            vetA[i] = 21 + i;
            printf("Os valores s�o: %d \n", vetA[i]);

        }


    return 0;
    }
