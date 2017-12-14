/*Faça um programa que grave em um arquivo binário chamado “teste.dat” o nome e
a média de N alunos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtde; // quantidade de registros
    int c; // contador

    FILE *arq; // ponteiro para o arquivo

    // Define o tipo t_aluno
    typedef struct
    {
        char nome [41];
        float media;
    } t_aluno;

    t_aluno a; // Cria variável a do tipo t_aluno
    // Abre o arquivo binário para gravação
    arq = fopen ("teste.dat", "wb");

    if (arq == NULL)
    {
        printf("Problemas na criação do arquivo\n");
        exit (1);
    }
    // Usuário digita o número de registros
    printf ("Numero de alunos: ");
    scanf (" %i",&qtde);
    // Usuário digita os dados
    for (c = 0; c < qtde; c++)
    {
        printf ("\nRegistro %i\n",c+1);
        printf ("Nome : "); scanf (" %40[^\n]",a.nome);
        printf ("Media : "); scanf (" %f",&a.media);
        // Grava os dados no arquivo
        fwrite (&a, sizeof (t_aluno),1,arq);
    }
    fclose (arq); // Fecha o arquivo
}
