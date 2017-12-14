/*Faça um programa que leia 10 números em um vetor A e 10 números em um
vetor B e depois construa um vetor de 20 posições com os valores de A e B
intercalados.
A = 1 1 3 6 ...
B = 3 5 7 9 ...
a) Numa primeira forma de intercalação, o vetor considera um elemento do vetor
A depois o elemento do vetor B e assim sucessivamente.
AB = 1 3 1 5 3 7 6 9 ...
*/

#include<stdio.h>

int main()
{

    int A[10], B[10], AB[20];
    int k=0, j=1, i;
    
    printf("Vetor A\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Vetor B\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &B[i]);
    }

    printf("Vetor AB\n");
    for(i=0; i<10; i++)
    {
        AB[k] = A[i];
        AB[j] = B[i];
        
        k += 2;
        j += 2;
    }
    
    for(i=0; i<20; i++)
    {
        printf("AB[%d] = %d\n", i, AB[i]);
    }

    return 0;
}

