#include <stdio.h>
#include <stdlib.h>

int main()
{
system("color 02");

char sexo;
int idade;

printf("DIGITE SEU SEXO (F) PARA FEMININO OU (M) PARA MASCULINO E SUA IDADE: \n") ;
scanf("%c %d", &sexo, &idade);

sexo = toupper(sexo);

if(sexo == 'M' && idade>=18)
{
    printf("VOCE TEM QUE SE ALISTAR");
}
else
{
    printf("VOCE NAO TEM QUE SE ALISTAR");
}

}

