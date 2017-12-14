/* 5 – Uma empresa comercializa 100 produtos diferentes. Para cada produto, a empresa armazena dos seguintes dados: nome, preço e quantidade de venda em cada dia do mês (30 dias). Desenvolva um programa que leia os dados dos produtos, gere uma nova variável (vetor) que contenha o nome do produto e a quantidade total de unidades vendidas no mês, para os produtos que tiveram uma venda mensal superior a 1000 unidades. Realize a impressão da nova variável.  */

#include<stdio.h>

typedef struct empresa
{
    char nome[50];
    float preco;
    int qtd_venda[30];

} EMPRESA;

int main()
{
    int i, x, ind_total_venda, total_venda[3];

    EMPRESA E[100];

    for(i=0; i<100; i++)
    {
        printf("Produto: ");
        scanf("%s", E[i].nome);
        printf("Preço: R$");
        scanf("%f", &E[i].preco);
        printf("Quantidade vendida em cada dia do mês: \n");
        for(x=0; x<30; x++)
        {
            printf("%dº dia: ", x+1);
            scanf("%d", &E[i].qtd_venda[x]);
            total_venda[i] = total_venda[i] + E[i].qtd_venda[x];
        }
        printf("\n");
    }
    printf("Produtos com venda mensal superior a 1000 unidades: \n");
    for(i=0; i<100; i++)
    {
        if(total_venda[i] > 1000)
        {
            printf("Produto: %s\n", E[i].nome);
            printf("Total de unidades vendidas no mês: %d\n", total_venda[i]);   
            printf("\n");      
        }  
    }

    return 0;
}
