#include <stdio.h>
#include <stdlib.h>

int main(){
  int lado_a, lado_b, lado_c;
  printf("-----------------------------1 TRABALHO DE LOGICA MATEMATICA  PEDRO SPERANDIO PROF HIROSHI-----------------------------\n ");
  printf("------------------------------CONDICAO DE EXISTENCIA DE UM TRIANGULO ( A , B , C) EM C------------------------------\n ");
  printf("DIGITE UM VALOR a: \n");
  scanf("%d",&lado_a);
  printf("DIGITE UM VALOR b: \n");
  scanf("%d",&lado_b);
  printf("DIGITE UM VALOR c: \n");
  scanf("%d",&lado_c);
  //condicao de existencia
  if(((lado_a + lado_b) > lado_c && abs (lado_a - lado_b) < lado_c)
     && ((lado_a + lado_c) > lado_b && abs (lado_a - lado_c) < lado_b)
      && ((lado_b + lado_c) > lado_a && abs (lado_b - lado_c) < lado_a )){
       printf("E UM TRIANGULO, DO TIPO ");
    //equilatero - CORRETO 6 PARENTESES ()!
    if((lado_a == lado_b ) && (lado_a == lado_c)){
        printf("EQUILATERO, TODOS LADOS SAO IGUAIS!");
    }
    //isosceles
    if(((lado_a == lado_b) && (lado_a != lado_c)) || ((lado_a == lado_c) && (lado_a != lado_b)) || ((lado_b == lado_c) && (lado_b != lado_a))){
        printf("ISOSCELES, DOIS LADOS SAO IGUAIS!");
    }
    //escaleno
    if((lado_a != lado_b) && (lado_a != lado_c) && (lado_b != lado_c)){
        printf("ESCALENO, TODOS LADOS SAO DIFERENTES!");
    }
  }//fim condicao existencia
  else{
    printf("TRIANGULO INEXISTENTE!");
  }

    return 0;
}
//CONTEM 12 CHAVES {} CORRETO!
