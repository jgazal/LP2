//Faça um programa que leia 50 números e depois solicita um número N e imprima os índices em que o número N aparece.

#include<stdio.h>

int main()
{
    int v[50], i, N;

    for(i=0; i<=49; i++)    
    {
        scanf("%d", &v[i]);
    }
    printf("Escreva um número N: ");
    scanf("%d", &N);
    
    for(i=0; i<=49; i++)
    {
        if(v[i]==N)
        {
            printf("v[%d] = %d\n", i, N);
        }
    }
    

    return 0;
}
