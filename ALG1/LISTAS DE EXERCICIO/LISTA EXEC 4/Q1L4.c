#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 02");
    int num = 1;
    while(num > 0){
        printf("DIGITE O VALOR:\n");
        scanf("%d",&num);

        printf("O QUADRADO DE %d = %d \n\n", num, num*num);
    }
    printf("FIM!");

    return 0;
}
