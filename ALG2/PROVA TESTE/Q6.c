#include <stdio.h>

int main ()
{
    int idade = 0;
    char genero = 0;

    printf("ALISTAMENTO MILITAR!\n\n");
    printf("INSIRA SUA IDADE:\n");
    scanf("%d",&idade);

    printf("INSIRA SEU GENERO:\n");
    printf("MASCULINO(M) e FEMININO(F)\n");
    scanf("%c",&genero);

    if(idade >= 18 && genero == 'M')
    {
        printf("ALISTAMENTO OBRIGATORIO!\nVOCE JA PODE SE ALISTAR!");
    }
    if(idade >= 18 && genero != 'M')
    {
        printf("ALISTAMENTO OPCIONAL!\nVOCE JA PODE SE ALISTAR!");
    }
    if(idade < 18)
    {
        printf("VOCE NAO TEM IDADE MINIMA PARA SE ALISTAR!");
    }

return 0;
}

