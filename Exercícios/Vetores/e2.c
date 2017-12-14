//Faça um programa que leia 10 números e depois de lidos imprima os números na ordem inversa em que foram digitados.

#include<stdio.h>

int main()
{

    int v[10], i;

    for(i=0; i<=9; i++)    
    {
        scanf("%d", &v[i]);
    }
    for(i=9; i>-1; i--)    
    {
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0;
}
