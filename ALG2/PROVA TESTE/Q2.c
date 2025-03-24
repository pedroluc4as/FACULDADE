#include <stdio.h>

int main ()
{
    int dia, mes, ano, datanasc;

    printf("Insira sua data de nascimento DD/MM/AAAA:\n");
    printf("DIA:\n");
    scanf("%d",&dia);
    printf("MES:\n");
    scanf("%d",&mes);
    printf("ANO:\n");
    scanf("%d",&ano);

    if(dia <= 0 || dia > 31 || mes <= 0 || mes > 12 || ano <= 0 || ano > 2025)
    {
        printf("DATA INVALIDA! INSIRA UMA DATA NOVAMENTE!\n");
    }
    else
    {
        printf("DATA VALIDA!");
    }

return 0;
}
