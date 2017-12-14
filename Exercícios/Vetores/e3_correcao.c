//Faça um programa que leia 50 números e depois solicita um número N e imprima os índices em que o número N aparece.

#include<stdio.h>

int main()
{
    int vet[50], i, encontrou=0, n;

    for(i=0; i<50; i++)    
    {
        scanf("%d", &vet[i]);
    }

    scanf("%d", &n);
    
    for(i=0; i<50; i++)
    {
        if(vet[i]==n)
        {
            encontrou = 1;
            printf("%d\n", i);
        }
    }
    if(!encontrou)
    {
        printf("Elemento não encontrado no vetor\n");
    }
    
    return 0;
}
