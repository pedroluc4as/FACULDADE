#include <stdio.h>
int main()
{
 int A[20], B[20], cont = 5;

 printf ("\nValores:");
 for (int i = 0; i < 20; i++)
 {
    A[i] = cont;
    cont++;
    printf(" %d", A[i]);
 }

 printf ("\n\nDobro dos valores:");
 for (int i = 0; i < 20; i++)
 {
    B[i] = A[i] * 2;
    printf (" %d", B[i]);
    cont++;
 }
return 0;
}
