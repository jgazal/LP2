/*10. Escrever um programa que leia o arquivo anterior, gravado na forma binária,
usando registro, e informe o nome do aluno que obteve a melhor nota.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    typedef struct
    {
        char nome[20];
        float nota;
    }alunos;
    alunos a;

    char nomeArquivo[20], alunoMaiorNota[20];
    float maior_nota=0;
    FILE *arq;

    printf("Nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arq = fopen(nomeArquivo, "rb");
    if(arq==NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    while(fread(&a, sizeof(alunos), 1, arq)!=0)
    {
        printf("%s %.1f\n", a.nome, a.nota);

        if(a.nota > maior_nota)
        {
            maior_nota = a.nota;
            strcpy(alunoMaiorNota, a.nome);
        }
    }
    printf("\nMaior nota: %.1f\nAluno: %s\n", maior_nota, alunoMaiorNota);

    fclose(arq);

    return 0;
}
