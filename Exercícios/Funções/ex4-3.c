/*Construa um módulo que, dado um número de conta corrente com cinco dígitos,
  retorne seu dígito verificador, o qual é calculado da seguinte maneira:
    - Número da conta: 25678
    - Somar o número da conta com seu inverso: 25678 + 87652 = 113330
    - Multiplicar cada dígito por sua ordem posicional e somar esse resultado:
        1   1   3   3   3   0
      x 1   2   3   4   5   6
        _   _   _   _   _   _
      + 1   2   9   12  15  0   = 39
    - O último dígito deste resultado é o dígito verificador da conta (39 -> 9) */

#include<stdio.h>

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

int main()
{
    int n;

    printf("Número da conta corrente: ");
    scanf("%d", &n);
    //printf("%d\n",digitoVer(n));
  	printf("Dígito verificador: %d\n",digitoVer(n)%10);
}
