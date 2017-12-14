/* 4 – Desenvolva um programa que realize o cadastro de contas bancárias com as seguintes informações: número da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas quinze contas e não poderá haver mais que uma conta com o mesmo número. Crie o menu de opções a seguir:
1. Cadastrar contas
2. Visualizar todas as contas de determinado cliente
3. Excluir a conta com menor saldo (supondo a não existência de saldos iguais)
4. Sair   */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct banco
{
    int num_conta;
    char nome_cliente[50];
    float saldo;

} BANCO;

int main()
{
    int i, opcao;
    float menor_saldo=0;
    char cliente[50], resp;

    BANCO B[15];

    do{
    system("clear");
    printf("==============Cadastro de contas bancárias==============\n");
    printf("\n1- Cadastrar contas\n");
    printf("2- Visualizar todas as contas de determinado cliente\n");
    printf("3- Excluir a conta com menor saldo\n");
    printf("4- Sair\n");
    printf("\nOpção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            system("clear");
            for(i=0; i<15; i++)
            {
                printf("Nome do cliente: ");
                scanf("%s", B[i].nome_cliente);            
                printf("Conta: ");
                scanf("%d", &B[i].num_conta);
                printf("Saldo: R$");
                scanf("%f", &B[i].saldo);              
                menor_saldo = B[i].saldo;
                if(B[i].saldo < menor_saldo)
                {
                    menor_saldo = B[i].saldo;
                }
                printf("\n");
            }
        break;

        case 2:
            system("clear");
            printf("Informe o cliente que se deseja visualizar a conta: ");
            scanf("%s", cliente);
            for(i=0; i<15; i++)
            {
                if(strcmp(B[i].nome_cliente, cliente)==0)
                {
                    printf("Conta: %d\n", B[i].num_conta);
                    printf("Saldo: %.2f\n", B[i].saldo);
                } 
            }
            printf("\nPressione 0 (Zero) para voltar: \n");
            while(opcao!=0)
            {
                scanf("%d", &opcao); 
            }
        break;
        
        case 3:
            system("clear");
            for(i=0; i<15; i++)
            {
                if(B[i].saldo <= menor_saldo)
                {
                    menor_saldo = B[i].saldo;
                    
                    printf("Deseja realmente excluir a conta %d? (S/N)\n", B[i].num_conta);
                    scanf("%c", &resp);
                    if(resp=='s')
                    {
                        B[i].num_conta = 0;
                        B[i].saldo = 0;   
                    } 
                }
            }
            printf("\nPressione 0 (Zero) para voltar. \n");
            while(opcao!=0)
            {
                scanf("%d", &opcao); 
            }
        break;
        
        case 4:
            system("clear");
            printf("Saindo\n");
        break;
        
        default: 
            printf("Valor inválido\n");
            printf("Pressione 0 (Zero) para voltar: \n");
            while(opcao!=0)
            {
                scanf("%d", &opcao); 
            }
    }
    }while(opcao!=4);

    return 0;
}
