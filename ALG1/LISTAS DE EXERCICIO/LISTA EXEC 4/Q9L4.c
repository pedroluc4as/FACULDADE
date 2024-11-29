#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 1f");
    int controle = 0, num, i, j, multiplo = 0;
    printf("digite o qtd de impressao dos multiplos: \n");
    scanf("%d",&num);
    printf("digite o valor de i: \n");
    scanf("%d",&i);
    printf("digite o valor de j: \n");
    scanf("%d",&j);
    while(multiplo < num){
        if(controle % i == 0 || controle % j == 0){
            printf("%d ",controle);
            multiplo++;
        }
        controle++;
    }
    return 0;
}
