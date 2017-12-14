////Faça um programa que armazene as notas da primeira nota em um vetor N1, as notas da prova 2 em um vetor N2. Com as notas nos vetores N1 e no vetor N2, o sistema calcula a média e armazena em um vetor NMED.

#include<stdio.h>

int main()
{
    int alunos, i;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    
    float N1[alunos], N2[alunos], NMED[alunos];
    
    for(i=0; i<alunos; i++)
    {
        scanf("%f %f", &N1[i], &N2[i]);
        NMED[i] = (N1[i] + N2[i])/2;
    }
    printf("%.1f", NMED[i]);

    return 0;
}
