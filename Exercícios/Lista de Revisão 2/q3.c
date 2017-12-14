/*3. Faça um programa usando ponteiros, para ordenar 5 números e mostrá-los
ordenados na tela.*/

#include<stdio.h>

int main()
{
    int num[4], i, j, temp1, temp2;

    printf("Informe 5 números: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &num[i]);
    }
    int *aux1 = num;
    int *aux2 = num;

    printf("Ordem crescente: \n");
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(num[i]>num[j])
            {
                temp1 = *(aux1+i);
                *(aux1+i) = *(aux1+j);
                *(aux1+j) = temp1;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",*aux1++);
    }
    printf("\n");
    printf("Ordem decrescente: \n");
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(num[i]<num[j])
            {
                temp2 = *(aux2+i);
                *(aux2+i) = *(aux2+j);
                *(aux2+j) = temp2;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",*aux2++);
    }
    printf("\n");

    return 0;
}
