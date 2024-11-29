#include <stdio.h>
#include <stdlib.h>
int main(){
int icorrente, vtensao, rres, potencia;

system("color 02");

printf("DIGITE A CORRENTE (i) \n");
scanf("%d",&icorrente);

printf("DIGITE A TENSAO (V) \n");
scanf("%d",&vtensao);

printf("DIGITE A RESISTENCIA (ohm) \n");
scanf("%d",&rres);

if(icorrente == 0){

potencia = (vtensao*vtensao)/rres;

}
if(vtensao == 0){

potencia =  rres*(icorrente*icorrente);

}

printf("%d watts", potencia);
return 0;
}
