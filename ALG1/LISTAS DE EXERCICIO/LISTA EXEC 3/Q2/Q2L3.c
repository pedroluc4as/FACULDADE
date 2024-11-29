#include <stdio.h>
#include <stdlib.h>

int main(){
system("color 02");

int idade, peso;

printf("DIGITE SUA IDADE: \n");
scanf("%d",&idade);

printf("DIGITE SEU PESO: \n");
scanf("%d",&peso);

if(idade>=18 && idade<=69 && peso>=50)
{
    printf("VOCE ESTA HABITO A DOAR SANGUE!\n");
}
else
{
    printf("VOCE NAO ESTA HABITO A DOAR SANGUE!\n");
}

return 0;
}
