/*Faça um programa que grave os seguintes dados em um arquivo chamado
“notas.txt”:
Número      Nome        Média
  1       Maria Luiza   7.0
  2       Ana Maria     8.0   */

#include <stdio.h>

int main()
{ // Cria a estrutura t_aluno
    typedef struct
    {
        int numero;
        char nome [41];
        float media;
    } t_lista ;
    // Cria a[2] e já preenche os dados.
    t_lista a[2] = {{1,"Maria Luiza",7},{2,"Ana Maria",8}};
    FILE *arq;
    // Abre o arquivo para gravação (write)
    arq = fopen ("notas.txt", "w");
    // Grava os dados no arquivo de maneira formatada
    fprintf (arq,"%10i %-40s %8.2f\n",a[0].numero, a[0].nome, a[0].media);
    fprintf (arq,"%10i %-40s %8.2f\n",a[1].numero, a[1].nome, a[1].media);
    // Fecha o arquivo
    fclose (arq);
}
