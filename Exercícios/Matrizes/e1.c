//Faça um algoritmo que recebe uma matriz A[5][5] e imprima a soma dos seus elementos.

#include<stdio.h>

int main()
{
    int A[5][5], soma=0, i, j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &A[i][j]); 
            soma = soma + A[i][j];  
        } 
    }
    printf("%d\n", soma);
   
    return 0;
}
