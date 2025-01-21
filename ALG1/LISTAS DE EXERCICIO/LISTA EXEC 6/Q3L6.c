#include <stdio.h>
int main()
{
    int vet_matlogica [10] = {10,15,6,35,76,98,97,101,92,1};
    int vet_matprog [8] = {1,0,5,4,3,5,6,98};
    for(int i=0; i<10; i++)
    {
        if(i<8)
        {
            printf("MATRICULA LOGICA %d E MATRICULA L. PROGRAMACAO %d \n",vet_matlogica[i],vet_matprog[i]);
        }
        else
        {
            printf("MATRICULA LOGICA %d \n",vet_matlogica[i]);
        }
    }
    printf("\n\n\n");
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(vet_matlogica[i] == vet_matprog[j]){
                printf("Matricula do aluno esta duplicada %d nas posicoes %d e %d \n",vet_matlogica[i],i+1,j+1);
            }
        }
    }




return 0;
}
