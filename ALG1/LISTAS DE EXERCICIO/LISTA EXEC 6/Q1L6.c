#include <stdio.h>
 int main()
 {
    int vet[6] = {30, 31, 32, 33, 34, 35};
    int cont_par = 0, cont_impar = 0;
        for (int i = 0; i < 6; i++)
        {
        }
            if (vet[i] % 2 == 0)
            {
            }
                cont_par++;
                printf ("\n%d par!",vet[i]); // letra B
            else
            {
            }
                cont_impar++;
                printf ("\n%d impar!",vet[i]); // letra D
        printf ("\n\nQuantidade de pares: %d",cont_par); // letra A
        printf ("\nQuantidade de impares: %d\n",cont_impar); // letra C
 return 0;
}
