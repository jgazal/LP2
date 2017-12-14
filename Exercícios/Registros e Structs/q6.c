/* 6 - Desenvolva um programa para controle de uma conta corrente de um banco, em um mês, para tanto deve ser lido o saldo no inicio do mês e os lançamentos no mês (considerar um número máximo de 10 lançamentos). Os lançamentos devem ser armazenados em vetor de registros com as seguintes informações: Data, Descrição, Valor e Tipo (D-Débito C-Crédito).
O programa deverá conter os seguintes passos:
1 – Definição do Registro
2 – Definição do Vetor dos registros definidos.
3 – Definição de uma Variável que conterá o vetor de registros.
4 – Deve ser lido o saldo inicial da conta.
5 – Devem ser lidos os lançamentos, enquanto a data for diferente de -1.
6 – Depois de lidos os registros deve ser impresso o extrato com todos os lançamentos, o saldo final da conta, o total de Crédito e o Total de Débitos. */

#include<stdio.h>
#include<string.h>

typedef struct lancamentos
{
    char data[10];
    char descricao[50];
    float valor;
    char tipo[3];

} LANCAMENTOS;

int main()
{
    int i, cont_debito=0, cont_credito=0;
    float saldo=0, saldo_final=0, total_credito=0, total_debito=0;

    LANCAMENTOS L[10];

    printf("Saldo: R$");
    scanf("%f", &saldo); 
    printf("\n");


    for(i=0; i<10; i++)
    { 
        printf("Data: ");
        scanf("%s", L[i].data);
        if(strcmp(L[i].data, "-1") != 0)
        { 
            printf("Descrição: ");  
            scanf("%s", L[i].descricao);
            printf("Valor: R$");
            scanf("%f", &L[i].valor);
            printf("Tipo (D-Débito | C-Crédito): ");
            scanf("%s", L[i].tipo);
            if(strcmp(L[i].tipo, "d") == 0)
            {
                cont_debito = cont_debito + 1;
                total_debito = total_debito + L[i].valor;
            } 
            if(strcmp(L[i].tipo, "c") == 0)
            {
                cont_credito = cont_credito + 1;
                total_credito = total_credito + L[i].valor;
            }
            saldo_final = saldo - (total_debito + total_credito);
            printf("\n"); 
        }
    }

    printf("========EXTRATO========\n");
    for(i=0; i<10; i++)
    {
        printf("Data: %s\n", L[i].data);
        printf("Descrição: %s\n", L[i].descricao);
        printf("Valor: %.2f\n", L[i].valor);
        printf("Tipo: %s\n", L[i].tipo);
        printf("\n");
    }   
        printf("Saldo final da conta: R$%.2f\n", saldo_final);
        printf("Quantidade de Créditos realizados: %d\n", cont_credito);
        printf("Total em Crédito: R$%.2f\n", total_credito);
        printf("Quantidade de Débitos realizados: %d\n", cont_debito);
        printf("Total em Débito: R$%.2f\n", total_debito);

    return 0;
}
