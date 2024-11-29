#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02");
    int i, soma=0;
    for(i=1; i<=100; i++)
    {
        if(i % 2 == 0)
        {
            soma = soma+i;
        }
    }
    printf("A SOMA DOS NUMEROS PARES = %d",soma);

return 0;
}
