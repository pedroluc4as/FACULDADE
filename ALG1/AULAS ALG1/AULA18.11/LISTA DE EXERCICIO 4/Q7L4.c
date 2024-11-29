#include <stdio.h>
#include <stdlib.h>

int main(){

    system("color 5f");

    int qtd, num, somapar=0, somaimpar=0, contadorpar=0, contadorimpar=0;
    printf("ESCOLHA UMA QUANTIDADE DE VEZES QUE VOCE IRA DIGITAR UM NUMERO: \n");
    scanf("%d",&qtd);
    for(int i=0;i<qtd;i++){
        scanf("%d",&num);
        if(num % 2 == 0){
            somapar=somapar+num;
            contadorpar++;
        }
        else{
            somaimpar=somaimpar+num;
            contadorimpar++;
        }
    }
    printf("%d SOMA DOS PARES \n\t %d SOMA DOS IMPARES \n\t\t %d QUANTIDADE PAR \n\t\t\t %d QUANTIDADE IMPAR",somapar,somaimpar,contadorpar, contadorimpar);

    return 0;
}


