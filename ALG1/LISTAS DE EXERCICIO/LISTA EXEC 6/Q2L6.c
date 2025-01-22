 #include <stdio.h>
 int main()
 {
    int vet[8] = {7, 12, 3, 32, 17, 18, 5, 40};
        for (int i = 0; i < 8; i++)
        {
        }
            if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
            {
            }
                printf ("\nMultiplo de dois e de tres: %d\n",vet[i]); // letra C
            else if (vet[i] % 2 == 0)
            {
            }
                printf ("\nMultiplo de dois: %d\n",vet[i]); // letra A
            else if (vet[i] % 3 == 0)
            {
            }
                printf ("\nMultiplo de tres: %d\n",vet[i]); // letra B
 return 0;
 }
