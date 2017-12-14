/* Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

Entrada
A entrada contém 15 números inteiros.

Saída
Imprima a saída conforme o exemplo abaixo. */

#include <stdio.h>

int main()
{   
    int par[5], impar[5], aux[5], i, j, k, l, m, p, c=0, t1=0, t2=0, x=0;    

    for(i=0; i<15; i++)
    {
        scanf("%d", &aux[i]);
    }
    for(j=0; j<15; j++)
    {
        if(t1==5)
        {
            for(k=0; k<5; k++)
            {
                printf("impar[%d] = %d\n", k, impar[k]);
                t1=0;
            }
        }
        if(t2==5)
        {
            for(p=0; p<5; p++)
            {
                printf("par[%d] = %d\n", p, par[p]);
                t2=0;
            }
        }

        if(aux[j]%2!=0)
        {
            impar[c] = aux[j];
            ++c;
            t1++;
            if(c==5)
            {
                c=0;
            } 
        }
        if(aux[j]%2==0)
        {
            par[x]=aux[j];
            ++x;
            t2++;
            if(x==5)
            {
                x=0;
            } 
        }
    }
    for(l=0; l<t1; l++)
    {
        printf("impar[%d] = %d\n", l, impar[l]);
    }
    for(m=0; m<t2; m++)
    {
        printf("par[%d] = %d\n", m, par[m]);
    }
       
    return 0;
}

//------------------------------------------------
/*----------Solução Aceita----------
#include <stdio.h>
int main()
{
    int a,b,c=0,d,e,f,g,h,i,j,l=0,m=0,x=0,n,p,par[5],impar[5],ara[15];
    for(b=0; b<15; b++)
        scanf("%d", &ara[b]);
    for(a=0; a<15; a++)
    {
        if(l==5)
        {
            for(n=0; n<5; n++)
                printf("impar[%d] = %d\n", n, impar[n]);
            l=0;
        }
        if(m==5)
        {
            for(p=0; p<5; p++)
                printf("par[%d] = %d\n", p, par[p]);
            m=0;
        }

        if(ara[a]%2!=0)
        {
            impar[c]=ara[a];
            ++c;
            l++;
            if(c==5) c=0;
        }
        if(ara[a]%2==0)
        {
            par[x]=ara[a];
            ++x;
            m++;
            if(x==5) x=0;
        }
    }
    for(i=0; i<l; i++)
            printf("impar[%d] = %d\n", i, impar[i]);
    for(j=0; j<m; j++)
            printf("par[%d] = %d\n", j, par[j]);
    return 0;
}
*/
