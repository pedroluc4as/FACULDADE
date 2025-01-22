#include <stdio.h>
int main()
{
 int A[8], valor = 0, maior = 0;
 printf ("\n");
 printf("Digite oito valores: \n");
 for (int i = 0; i < 8; i++)
 {
    scanf ("%d",&A[i]);
 }

 for (int i = 0; i < 8; i++)
 {
    if (A[i] > maior)
    {
        maior = A[i];
    }
 }
 printf ("\nMaior valor: %d\n",maior);

 return 0;
}
