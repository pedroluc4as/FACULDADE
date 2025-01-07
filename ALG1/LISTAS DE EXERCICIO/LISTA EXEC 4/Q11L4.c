#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 1f");
    int cont=0, gemeos=2;
    for(int p=3; p <=1000; p++){
        cont = 0;
        for(int i=1; i <=p; i++){
            if(p % i == 0){
            cont++;
            }
        }
        if(cont == 2){
            printf("%d e %d sao gemeos \n",gemeos, p);
            gemeos = p;
        }
    }

    return 0;
}
