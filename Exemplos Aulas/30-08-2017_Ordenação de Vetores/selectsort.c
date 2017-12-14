#include<stdio.h>

int main()
{ 
    int i, j, Min;
    int aux, n=5;
    int v[5] = {10, 2, 23, 7, 14};
  
    for (i=0; i<n-1; i++)
    { 
        Min = i;

        for (j=i+1; j<n; j++)
        {
            if (v[j] < v[Min]) 
            {
                Min = j;
            }   
        } 
        aux = v[Min];
        v[Min] = v[i];
        v[i] = aux;           
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t", v[i]);  
    }  
    printf("\n");
           
    return 0;
}

