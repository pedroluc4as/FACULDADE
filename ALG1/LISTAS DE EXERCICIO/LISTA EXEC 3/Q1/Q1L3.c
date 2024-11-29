#include <stdio.h>
#include <stdlib.h>

int main(){
system("color 02");

int num1, num2;

printf("DIGITE UM NUMERO: \n");
scanf("%d",&num1);

printf("DIGITE OUTRO NUMERO: \n");
scanf("%d",&num2);

if(num1>num2){
    printf("NUMERO %d E MAIOR \n",num1);
    printf("NUMERO %d E MENOR \n",num2);
}
else{
    printf("NUMERO %d E MENOR \n", num1);
    printf("NUMERO %d E MAIOR \n", num2);
}

return 0;
}
