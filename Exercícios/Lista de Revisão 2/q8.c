/*8. Escrever um programa que armazene em um arquivo texto os dados (nome e nota)
dos 50 alunos da turma. Deve ser informado o nome do arquivo. Fazer duas versões:
uma com os dados do aluno armazenados na mesma linha e outra armazenando cada
dado em uma linha distinta.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    typedef struct
    {
        char nome[20];
        float nota;
    }alunos;
    alunos a[50];

    char nomeArquivo[20];
    int i;
    FILE *arq;

    printf("\nNome do arquivo: ");
    scanf("%s", nomeArquivo);
    printf("\n");

    arq = fopen(nomeArquivo, "w");
    if(arq==NULL)
    {
        printf("Erro ao criar arquivo.\n");
        exit(1);
    }
    //Versão 1
    fprintf(arq, "Versão 1\n");
    for(i=0; i<50; i++)
    {
        printf("Registro: %d\n", i+1);
        printf("Nome: ");
        scanf("%s", a[i].nome);
        printf("Nota: ");
        scanf("%f", &a[i].nota);
        fprintf(arq, "%s %.1f ", a[i].nome, a[i].nota);
        printf("\n");
    }
    //Versão 2
    fprintf(arq, "\n\nVersão 2");
    for(i=0; i<50; i++)
    {
        fprintf(arq, "\n%s %.1f\n", a[i].nome, a[i].nota);
    }

    fclose(arq);

    return 0;
}
