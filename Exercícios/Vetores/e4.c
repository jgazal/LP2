//Faça um programa que armazene as notas da primeira nota em um vetor N1, as notas da prova 2 em um vetor N2. Com as notas nos vetores N1 e no vetor N2, o sistema calcula a média e armazena em um vetor NMED.

#include<stdio.h>

int main()
{
    float N1[2], N2[2], NMED[2];
    int i;

    for(i=0; i<2; i++)
    {
        printf("Aluno %d: \n", i);
        
        printf("N1 = ");
        scanf("%f", &N1[i]);
        
        printf("N2 = ");
        scanf("%f", &N2[i]);
        
        NMED[i] = (N1[i]+N2[i])/2;
        printf("Média = %.1f\n", NMED[i]);
        printf("\n");
        
    }
    
    return 0;
}
