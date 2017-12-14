/* Faça um programa para criar um arquivo chamado "dados.txt" que armazene o texto "Bom dia!". */

#include<stdio.h>

int main()
{
    FILE*arq;

    arq = fopen("dados.txt", "w");
    fprintf(arq, "Bom dia!");
    fclose(arq);
}
