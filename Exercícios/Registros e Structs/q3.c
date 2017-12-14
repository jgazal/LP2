/* 3 - O cadastro de produtos de uma loja deve conter: nome, preço, estoque. Defina um vetor de registros para conter uma lista de 20 produtos. Seu programa deverá permitir as operações abaixo:
▪ Cadastrar os produtos;
▪ Apresentar um relatório com todos os produtos que estão em falta (estoque = 0);
▪ Mostrar o preço do produto mais caro; */

#include<stdio.h>

typedef struct loja 
{
    char nome[50];
    float preco;
    int estoque;

} LOJA;

int main()
{
    int i, maior_preco=0, ind_maior_preco=0;

    LOJA L[20];

    for(i=0; i<20; i++)
    {
        printf("Nome: ");
        scanf("%s", L[i].nome);
        printf("Preço: ");
        scanf("%f", &L[i].preco);
        printf("Estoque: ");
        scanf("%d", &L[i].estoque);
        
        if(L[i].preco > maior_preco)
        {  
            maior_preco = L[i].preco;      
            ind_maior_preco = i;
        }
        printf("\n");
    }

    for(i=0; i<20; i++)
    {
        if(L[i].estoque==0)
        {
            printf("Produtos em falta: %s\n", L[i].nome);
        }       
    }
    printf("Produto mais caro: %s\n", L[ind_maior_preco].nome);
    printf("Preço: R$%.2f\n", L[ind_maior_preco].preco);

    return 0;
}
 

    
