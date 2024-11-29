#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j;
    system("color 02");
    do
    {
        j=1;
        do{
            printf("\n\n%d x %d = %d",i,j,i*j);
            j++;
        }while(j<=10);
        i++;
    }while(i<=10);

return 0;
}
