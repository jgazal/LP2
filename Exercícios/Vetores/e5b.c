/*Faça um programa que leia 10 números em um vetor A e 10 números em um
vetor B e depois construa um vetor de 20 posições com os valores de A e B
intercalados.
A = 1 1 3 6 ...
B = 3 5 7 9 ...
b) Assuma que os vetores A e B foram lidos em ordem crescente, intercale os
dois vetores A e B mantendo a ordenação dos números.
AB = 1 1 3 3 5 6 7 9 ...
*/

#include<stdio.h>

int main()
{

    int A[10], B[10], AB[20];
    int k=0, l=1, i, j, a, b, ab;
    
    printf("Vetor A\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &A[i]);
    }
    //Ordenação em ordem crescente de A[] usando o método Bubblesort
    for(j=1; j<10; j++) 
    {
        for(i=0; i<10-1; i++) 
        {
            if(A[i] > A[i+1]) 
            {
                a = A[i];
                A[i] = A[i+1];
                A[i+1] = a;
            }
        }
    }

    printf("Vetor B\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &B[i]);
    }
    //Ordenação em ordem crescente de B[] usando o método Bubblesort
    for(j=1; j<10; j++) 
    {
        for(i=0; i<10-1; i++) 
        {
            if(B[i] > B[i+1]) 
            {
                b = B[i];
                B[i] = B[i+1];
                B[i+1] = b;
            }
        }
    }

    printf("Vetor AB\n");
    for(i=0; i<10; i++)
    {
        AB[k] = A[i];
        AB[l] = B[i];
        
        k += 2;
        l += 2;
    }
    //Ordenação em ordem crescente de AB[] usando o método Bubblesort
    for(j=1; j<10; j++) 
    {
        for(i=0; i<10-1; i++) 
        {
            if(AB[i] > AB[i+1]) 
            {
                ab = AB[i];
                AB[i] = AB[i+1];
                AB[i+1] = ab;
            }
        }
    }

    for(i=0; i<20; i++)
    {
        printf("AB[%d] = %d\n", i, AB[i]);
    }

    return 0;
}

