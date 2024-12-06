  #include <stdio.h>
  #include <stdlib.h>

  int main(){
  int lado_a, lado_b, lado_c;

  printf("DIGITE UM VALOR a: \n");
  scanf("%d",&lado_a);
  printf("DIGITE UM VALOR b: \n");
  scanf("%d",&lado_b);
  printf("DIGITE UM VALOR c: \n");
  scanf("%d",&lado_c);

  if(((((lado_a + lado_b) > lado_c) && (abs (lado_a - lado_b) < lado_c) && ((lado_a + lado_c) > lado_b) && (abs (lado_a - lado_c) < lado_b) && ((lado_b + lado_c) > lado_a) && (abs (lado_b - lado_c) < lado_a)))){
  printf("E UM TRIANGULO, DO TIPO ");

  if((lado_a == lado_b ) && (lado_a == lado_c)){
  printf("EQUILATERO, TODOS LADOS SAO IGUAIS!");
  }

  if (((((lado_a == lado_b)&&(lado_a != lado_c))||( (lado_a == lado_c)&&(lado_a != lado_b)))||((lado_b == lado_c)&&(lado_b != lado_a)))){
  printf("ISOSCELES, DOIS LADOS SAO IGUAIS!");
  }

  if((((lado_a != lado_b)&&(lado_a != lado_c))&&(lado_b != lado_c))){
  printf("ESCALENO, TODOS LADOS SAO DIFERENTES!");
  }

  }
  else{
  printf("TRIANGULO INEXISTENTE!");
  }

  return 0;
  }
