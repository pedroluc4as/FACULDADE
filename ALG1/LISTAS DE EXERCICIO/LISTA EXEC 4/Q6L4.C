#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 02");

    int qtd, num, maior=0, menor;

    printf("INSIRA A QUANTIDADE DE NUMEROS DESEJADA: \n");
    scanf("%d",&qtd);

    for(int i=0 ;i<qtd;i++){
       scanf("%d",&num);
        if(num>maior){
            maior=num;
       }
       if(num<=menor){
            menor=num;
       }
    }

    printf("%d E O MAIOR NUMERO DIGITADO\n",maior);
    printf("%d E O MENOR NUMERO DIGITADO\n",menor);

    return 0;

}

