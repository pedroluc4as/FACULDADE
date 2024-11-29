#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 02");
    int num,soma = 0;
    printf("DIGITE UM NUMERO: \n");
    scanf("%d",&num);
    while(num > 0)
    {
        soma= soma+num;
        num--;
    }
    printf("RESULTADO DA SOMA: %d",soma);

    return 0;
}
