/*Escreva um programa que multiplique por dois as notas gravadas no arquivo
teste.dat dos exemplos anteriores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posicao;

    FILE *arq;

    typedef struct
    {
        char nome [41];
        float media;
    } t_aluno;

    t_aluno a;

    // Abre o arquivo binário para leitura e gravação
    if ((arq = fopen ("teste.dat", "r+b")) == NULL)
    {
        printf("Problemas na criação do arquivo\n");
        exit (1);
    }
    // Le os dados e os atualiza
    while (fread (&a, sizeof (t_aluno),1,arq)!= 0)
    {
        a.media = a.media * 2;
        posicao = ftell(arq)-sizeof(t_aluno);
        fseek(arq, posicao, SEEK_SET);
        fwrite(&a, sizeof (t_aluno),1,arq);
        fflush(arq);
    }
    // Fecha o arquivo
    fclose (arq);
}
