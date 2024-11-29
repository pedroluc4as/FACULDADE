#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 02");
    int num;
    printf("DIGITE UM NUMERO: \n");
    scanf("%d",&num);
    while(num > 0)
    {
        if(num % 2 == 1)
        {
           printf("O NUMERO %d E IMPAR \n",num);
           num--;
        }
        num--;
    }
    return 0;
}
