#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 02");
    int num,soma = 0,qtd = 0, media;
    while(num > 0)
    {
        printf("DIGITE O UM NUMERO: \n");
        scanf("%d",&num);
        soma = soma + num;
        qtd++;
    }

    media = soma / (qtd - 1);
    printf("\n\n MEDIA = %d",media);

    return 0;
}
