//Faça um programa que permita ler e mostrar os dados do programa anterior.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int qtde; // quantidade de registros
    int numero; // número do aluno
    char nome [41]; // nome do aluno
    float media; // média do aluno
    int c; // contador

    FILE *arq; // ponteiro para o arquivo
    // Abre o arquivo para leitura
    arq = fopen ("teste.txt", "r");
    // Verifica se o arquivo foi aberto com sucesso
    if (arq == NULL)
    {
        printf ("Erro ao abrir o arquivo\n");
        exit (1);
    }
    // Lê o número de registros do arquivo
    fscanf (arq, "%i",&qtde);
    // Lê os dados do arquivo e mostra na tela
    for (c = 0; c < qtde; c++)
    {
        fscanf (arq,"%i %40[^\n] %f",&numero,nome,&media);
        printf ("%10i %-40s %8.2f\n",numero, nome, media);
    }
    fclose (arq); // Fecha o arquivo
}
