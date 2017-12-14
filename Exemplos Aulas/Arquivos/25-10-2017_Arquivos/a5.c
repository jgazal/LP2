/* Faça um programa que leia o número e a média cada aluno cadastrado em um arquivo chamado “notas.txt”.
Coloque os alunos com média maior ou igual a 6.0 em um arquivo chamado “aprovados.txt” e os demais em um arquivo chamado “recuperacao.txt”. 
Observação: o arquivo “alunos.txt”, contendo o número e as média de cada aluno, pode ser construído usando um editor de texto qualquer. */

#include<stdio.h>

int main()
{
    FILE*notas, *aprov, *recup;

    int numero;
    float media;

    //Abre os arquivos
    notas = fopen("notas.txt", "r");
    aprov = fopen("aprovados.txt", "w");
    recup = fopen("recuperacao.txt", "w");

    //Lê os dados e grava no arquivo
    while(fscanf(notas, "%d %f", &numero, &media)!=EOF)
    {
        if(media>=6)
        {
            fprintf(aprov, "%d %4.1f\n", numero, media);
        }
        else
        {
            fprintf(recup, "%d %4.1f\n", numero, media);
        }
    }

    //Fecha os arquivos
    fclose(notas);
    fclose(aprov);
    fclose(recup);
}
