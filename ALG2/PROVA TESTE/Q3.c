#include <stdio.h>

int main ()
{
    int n = 0, calc = 0, fat = 0;

    printf("CALCULO DO FATORIAL DE n\n\n");
    printf("DIGITE O VALOR DE n:\n");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        calc = n*(n-1);
    }
    fat+=calc;

    printf("FATORIAL DE %d = %d\n",n, fat);






return 0;
}
