//Faça um algoritmo que recebe uma matriz A[5][5] e imprima a soma dos seus elementos.

#include<stdio.h>

int main()
{
    int i, j, o, soma=0;
    
    printf("Matriz de ordem: ");
    scanf("%d", &o);

    int A[o][o];

    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d", &A[i][j]);
            soma = soma + A[i][j];
        }
    }
    printf("Soma dos elementos = %d\n", soma);

    return 0;
}
