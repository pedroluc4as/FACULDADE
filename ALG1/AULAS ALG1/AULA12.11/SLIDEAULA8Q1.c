#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02");
    int i=1, valor;
    do
    {
        printf("INSIRA UM VALOR: \n");
        scanf("%d",&valor);
        printf("-------------------\n\n");
        printf("VALOR DIGITADO = %d\n\n", valor);
        i++;
    }while(i<=10);

return 0;
}
