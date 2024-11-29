#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 5f");
    int i=1, num, fat;
    printf("digite um numero: \n");
    scanf("%d",&num);
    fat=num;
    while(i<num){
        fat=fat*(num-i);
        i++;
    }
    printf("%d",fat);


return 0;
}
