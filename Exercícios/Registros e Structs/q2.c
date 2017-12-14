/* 2 - Crie uma estrutura representando os alunos da disciplina de Linguagem de
Programação II. A estrutura deve conter a matrícula do aluno, nome, nota da primeira
prova, nota da segunda prova, nota da terceira prova e nota da quarta prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior média geral.
d) Encontre o aluno com menor média geral.
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 7,0 para aprovação. */

#include<stdio.h>
#include<string.h>

typedef struct aluno
{
    char nome[50];
    int matricula;
    float notas[4];

} ALUNO;

int main()
{
    int i, x, ind_maior_nota=0, ind_maior_media=0, ind_menor_media=0;
    float media=0, maior_nota=0, maior_media=0, menor_media=0;

    ALUNO A[5];

    for(i=0; i<5; i++)
    {
        printf("Nome: ");
        scanf("%s", A[i].nome);
        printf("Matrícula: ");
        scanf("%d", &A[i].matricula);

        printf("Notas: \n");
        for(x=0; x<4; x++)
        {
            printf("%dª: ", x+1);
            scanf("%f", &A[i].notas[x]);
            media = (A[i].notas[0] + A[i].notas[1] + A[i].notas[2] + A[i].notas[3])/4; 
            if(i==0) 
            {
                maior_media = menor_media = media;
            }
        }          
        printf("Média: %.1f\n", media);  
        if(media >= 7)
        {
            printf("Situação: Aprovado\n"); 
        }
        else
        {
            printf("Situação: Reprovado\n");   
        }

        if(A[i].notas[0] > maior_nota)
        {
            maior_nota = A[i].notas[0];
            ind_maior_nota = i;
        }      
        if(media > maior_media)
        {
            maior_media = media;
            ind_maior_media = i;
        }
        if(media < menor_media && media < maior_media)
        {
            menor_media = media;
            ind_menor_media = i;
        }
        printf("\n");
    }

    printf("Aluno com maior nota na primeira prova: %s\n", A[ind_maior_nota].nome);
    printf("Aluno com maior média geral: %s\n", A[ind_maior_media].nome);
    printf("Aluno com menor média geral: %s\n", A[ind_menor_media].nome);

    return 0;
}
