/*9. Escrever um programa que armazene em um arquivo binário os dados (nome e
nota) dos 50 alunos da turma. Deve ser informado o nome do arquivo. Fazer quatro
versões: uma com os dados do aluno armazenados na mesma linha e outra armazenando
cada dado em uma linha distinta e gravando o arquivo binário sem usar registro uma
com os dados do aluno armazenados na mesma linha e outra armazenando cada dado
em uma linha distinta e gravando o arquivo binário usando registro.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    typedef struct
    {
        char nome[20];
        float nota;
    }alunos;
    alunos a;

    char nomeArquivo[20];
    int i;
    FILE *arq;

    printf("\nNome do arquivo: ");
    scanf("%s", nomeArquivo);
    printf("\n");

    arq = fopen(nomeArquivo, "wb");
    if(arq==NULL)
    {
        printf("Erro ao criar arquivo.\n");
        exit(1);
    }

    for(i=0; i<50; i++)
    {
        printf("Registro: %d\n", i+1);
        printf("Nome: ");
        scanf("%s", a.nome);
        printf("Nota: ");
        scanf("%f", &a.nota);
        fwrite(&a, sizeof(alunos) , 1, arq);
        printf("\n");
    }

    fclose(arq);

    return 0;
}
