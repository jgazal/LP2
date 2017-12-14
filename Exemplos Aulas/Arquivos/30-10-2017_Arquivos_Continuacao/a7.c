//Faça um programa leia e mostre na tela os dados do programa anterior.

#include <stdio.h>

int main()
{
    int numero;
    char nome [41];
    float media;
    int c;

    FILE *arq;
    // Abre o arquivo para leitura
    arq = fopen ("notas.txt", "r");
    // Lê os dados do arquivo e mostra na tela
    for (c = 0; c < 2; c++)
    {
        fscanf (arq,"%i %40[^\n] %f",&numero, nome, &media);
        printf ("%10i %-40s %8.2f\n",numero, nome, media);
    }
    // Fecha o arquivo
    fclose (arq);
}
