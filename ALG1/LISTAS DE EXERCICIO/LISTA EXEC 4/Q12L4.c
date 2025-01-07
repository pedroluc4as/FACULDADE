#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 1f");
    int p, i=1, cont=0;
    for(p=2; p <= 20000; p++){
       while(i <= p){
       if(p % i == 0){
            cont++;
       }
       i++;
    }
    i=1;
    if(cont == 2){
        printf("E primo ");
       }
       else{
        printf("Nao e primo ");
       }
    printf("%d \n",p);
    cont = 0;
    }



    return 0;
}
