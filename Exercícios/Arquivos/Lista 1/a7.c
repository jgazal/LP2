/* 7- Faça um programa que leia um arquivo com os preços de diversos produtos,
e calcule o total da compra. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char produto[10];
    int qtd;
    float valor, total=0.0;

    FILE*arq;
    arq = fopen("listaCompras.txt", "r");

    if(arq==NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    while(!feof(arq))
    {
        fscanf(arq, "%s" "%d" "%f", produto, &qtd, &valor);
        total += qtd*valor;
    }
    printf("Total da compra: R$%.2f\n", total);

    fclose(arq);

    return 0;
}
