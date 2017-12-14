/*Faça um programa que leia e mostre na tela os dados do arquivo “teste.dat” do
exemplo anterior.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;

    typedef struct
    {
        char nome [41];
        float media;
    } t_aluno;

    t_aluno a;
    // Abre o arquivo binário para leitura
    arq = fopen ("teste.dat", "rb");
    // Lê os dados no arquivo
    while(fread (&a, sizeof (t_aluno),1,arq)!= 0)
    {
        printf ("%-40s %4.1f\n",a.nome, a.media);
    }
    fclose (arq); // Fecha o arquivo
}
