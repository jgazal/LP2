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
    int A[10], B[10], AB[20], j=0, iA=0, iB=0, i=0;

    for(i=0; i<10; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
    }
    while(j<20)
    {
        if(A[iA] < B[iB] && iA<10 && iB<10)
        {
            AB[j++] = A[iA++];
        }
        else
        {
            if(iA<10 && iB>=10)
            {
                AB[j++] = A[iA++];
            }
            if(iB<10 && iA>=10)
            {
                AB[j++] = B[iB++];
            }
            if(iB<10 && iA<10 && A[iA] > B[iB])
            {
                AB[j++] = B[iB++];
            }
        }
        printf("AB[%d] = %d\n", j, AB[iB]);
    }

    return 0;
}
