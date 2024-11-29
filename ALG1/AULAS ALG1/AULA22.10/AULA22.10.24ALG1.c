#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    system("color 70");
    int base, exp, pot = 1;
    printf("DIGITE A BASE: ");
    scanf("%d",&base);

    printf("\n\nDIGITE O EXPOENTE: ");
    scanf("%d",&exp);

    pot = pow(base,exp);

    printf("\n\n%d",pot);
    return 0;
}
