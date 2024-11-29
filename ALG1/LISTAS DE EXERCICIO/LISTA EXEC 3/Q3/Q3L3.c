#include <stdio.h>
#include <stdlib.h>

int main()
{
system("color 02");
int dia, mes, ano;

printf("DIGITE SUA DATA DE NASCIMENTO (DD MM AAAA): \n");
scanf("%d %d %d",&dia,&mes,&ano);

if ((dia>=1 && dia<=31) && (mes>=1 && mes<=12) && (ano>=0001 && ano<=9999))
{
    printf("DATA VALIDA\n");
}

else
{
    printf("DATA INVALIDA\n");
}

return 0;
}
