#include<stdio.h>

int main()
{
    int i,j;
    int aux, n=5;
    int v[5] = {10, 2, 23, 7, 14};

    for (i=1; i<n; i++)
    {
        aux = v[i];
        j = i - 1;

        while ((j>=0) && (aux<v[j]))
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t", v[i]);  
    }  
    printf("\n");
    
    return 0;
}

