#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02");
    int i=1, soma=0;
    do
    {
        if(i % 2 == 1)
        {
            soma=soma+i;
        }
        i++;
    }while(i<=30);
     printf("A SOMA DOS NUMEROS PARES = %d",soma);
return 0;
}
