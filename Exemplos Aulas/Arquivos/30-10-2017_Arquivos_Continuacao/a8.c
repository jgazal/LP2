/* Faça um programa permita gravar o número, o nome e a média de N alunos em
um arquivo.*/

#include <stdio.h>

int main()
{
    int qtde; // quantidade de registros
    int numero; // número do aluno
    char nome [41]; // nome do aluno
    float media; // média do aluno
    int c; // contador

    FILE *arq; // ponteiro para o arquivo
    // Abre o arquivo para gravação
    arq = fopen ("teste.txt", "w");
    // Usuário informa o número de registros
    printf ("Numero de alunos: ");
    scanf (" %i",&qtde);
    // Grava no arquivo o número de registros
    fprintf (arq, "%i\n",qtde);
    // Usuário digita os dados
    for (c = 0; c < qtde; c++)
    {
        printf ("\nRegistro %i\n",c+1);
        printf ("Numero: ");
        scanf (" %i",&numero);
        printf ("Nome : ");
        scanf (" %40[^\n]",nome);
        printf ("Media : ");
        scanf (" %f",&media);
        // Grava os dados no arquivo
        fprintf(arq,"%10i %-40s %8.2f\n",numero,nome,media);
    }
    // Fecha o arquivo
    fclose (arq);
}
