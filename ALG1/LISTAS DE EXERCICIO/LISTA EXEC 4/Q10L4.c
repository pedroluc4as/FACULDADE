#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 1f");
    int p, i=1, cont=0;
    printf("digite P: \n");
    scanf("%d",&p);
    while(i <= p){
       if(p % i == 0){
            cont++;
       }
       i++;
    }
    if(cont == 2){
        printf("e primo");
       }
       else{
        printf("nao e primo");
       }
    return 0;
}
