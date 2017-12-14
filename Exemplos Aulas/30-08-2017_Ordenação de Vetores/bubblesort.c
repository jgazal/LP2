#include<stdio.h>

int main()
{
    int i, j;
    int aux, n=5;
    int v[5] = {10, 2, 23, 7, 14};

    for(i=1; i<n; i++)
    {
        for(j=0; j<n; j++)
        {   
            if (v[j] < v[j-1]) 
            {
                aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;  
            }            
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t", v[i]);  
    }  
    printf("\n");

    return 0; 
}

