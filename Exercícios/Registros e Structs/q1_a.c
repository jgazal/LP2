/* 1 – Faça a declaração das variáveis representadas abaixo, utilizando a Linguagem C:
a) Contas
          
           |      NOME       |
           |RUA| NÚMERO |CPF |
           |     SALDO       |  */

typedef struct contas
{
    char nome[50];
    char rua[50];
    int numero;
    int cpf;
    float saldo;

} CONTAS;
