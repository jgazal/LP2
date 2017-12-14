//Faça um algoritmo que recebe uma matriz A[6][6] e imprima a soma dos elementos da sua diagonal principal e da sua diagonal secundária.

#include<stdio.h>

int main()
{
    int A[6][6], sdp=0, sds=0, i, j;

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            scanf("%d", &A[i][j]);  

            if(i==j)
            {
                sdp = sdp + A[i][j];
            }
            if(i+j==5)
            {
                sds = sds + A[i][j];
            }
        } 
    }
    printf("Soma Diagonal Principal = %d\n", sdp);
    printf("Soma Diagonal Secundária = %d\n", sds);

    return 0;
}
