/*Com base no seguinte registro:

    Número do cheque:___________________ Agência:______
    Número da conta corrente:___________ DV:___________
    Nome:_______________________________ Valor:________

Construa um algoritmo que possua:
    - módulo para leitura do registro;
    - módulo para validação do dígito verificador (utilize a mesma fórmula do
      exercício 4.3);
    - módulo para somar e imprimir a soma total dos cheques de uma mesma pessoa,
      acionando cada vez que a leitura detecta outro cliente.
O algoritmo deve ser executado até que o número do cheque seja igual a zero. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct cheque
{
    int num_cheque;
    int agencia;
    int num_cc;
    int dv;
    char nome[50];
    float valor;

} CHEQUE;

CHEQUE C[2];

void leituraR()
{
    int i;

    for(i=0; i<2; i++)
    {
        printf("Número do cheque: %d\n", C[i].num_cheque);
        printf("Agência: %d\n", C[i].agencia);
        printf("Número da conta corrente: %d\n", C[i].num_cc);
        printf("Dígito verificador: %d\n", C[i].dv);
        printf("Nome: %s\n", C[i].nome);
        printf("Valor: %.2f\n", C[i].valor);
        printf("\n");
    }
}


int qtdDigitos(int x)
{
    int i=0, num=1;

    if(x==0)
    {
        i = 1;
    }
    else
    {
        while(x!=0)
        {
            i += 1;
    	    if(i>=2)
            {
    	        num = num*10;
            }
    	    x = x/10;
        }
    }
    return i;
}

int qtdDigitos2(int x)
{
    int i=0, num=1;

    if(x==0)
    {
        i = 1;
    }
    else
    {
        while(x!=0)
        {
            i += 1;
            if(i>=2)
            {
    	        num = num*10;
    	    }
    	    x = x/10;
        }
    }
    return num;
}

int inverso(int x)
{
    int v[qtdDigitos(x)], i, aux2, KK, aux1=0, aux3;

    aux2 = qtdDigitos2(x);
    aux3 = qtdDigitos2(x);
    KK = x;

    for(i=0; i<=qtdDigitos(x)-1; i++)
    {
        v[i] = KK/aux2;
        KK = KK - v[i]*aux2;
        aux2 = aux2/10;
    }
    for(i=qtdDigitos(x)-1; i>=0; i--)
    {
        aux1 = v[i]*aux3 + aux1;
        aux3 = aux3/10;
    }
    return aux1;
}

int digitoVer(int x)
{
    int aux1, v[6], KK, i, aux2, invertido=0;

    aux2 = 100000;
    aux1 = inverso(x) + x;
    KK = aux1;

    for(i=0; i<5; i++)
    {
        v[i] = (KK/aux2);
        KK = KK - v[i]*aux2;
        aux2 = aux2/10;
        invertido = invertido + v[i]*(i+1);
    }
    return invertido; 
}


void somar()
{
    int i, j;
    float soma;
    char nome[50];

    printf("Nome: ");
    scanf("%s", nome);

    for(i=0; i<2; i++)
    {
        if(strcmp(nome, C[i].nome)==0)
        {
            soma = soma + C[i].valor;
        }
    }
    printf("Soma dos cheques: %.2f\n", soma);
  }

int main()
{
    int i;

    for(i=0; i<2; i++)
    {
        printf("Número do cheque: ");
        scanf("%d", &C[i].num_cheque);
        printf("Agência: ");
        scanf("%d", &C[i].agencia);
        printf("Número da conta corrente: ");
        scanf("%d", &C[i].num_cc);
        printf("Dígito verificador: ");
        scanf("%d", &C[i].dv);
        printf("Nome: ");
        scanf("%s", C[i].nome);
        printf("Valor: ");
        scanf("%f", &C[i].valor);
        printf("\n");
    }

    leituraR();
    printf("Soma dos cheques de uma mesma pessoa: \n");
    somar();
    printf("\n");
    for(i=0; i<2; i++)
    {
  	    printf("Conta[%d] - Dígito verificador: %d\n", i+1, digitoVer(C[i].num_cc)%10);
    }

}
