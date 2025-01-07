#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 1f");
    int p, i=1, cont=0;
    //printf("digite P: \n");
    //scanf("%d",&p);

    for(p=2; p <= 20000; p++){
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
    printf("%d \n",p);
    }


    return 0;
}
