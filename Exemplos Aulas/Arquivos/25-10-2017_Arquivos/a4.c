/* Faça um programa que leia os números reais de um arquivo texto chamado “numeros.txt” e mostre na tela a soma desses números. 
Observação: o arquivo “numeros.txt” contendo os números que serão somados, pode ser construído usando um editor de texto qualquer */

#include<stdio.h>

int main()
{
    float numero;
    float soma;

    FILE*arq;

    //Abre o arquivo para leitura (read)
    arq = fopen("numeros.txt", "r");

    //Lê os números até o fim do arquivo
    soma = 0;
    while(fscanf(arq, "%f", &numero)!=EOF)
    {
        soma = soma + numero;
    }

    //Mostra a soma dos números
    printf("Soma: %10.2f\n", soma);

    //Fecha o arquivo
    fclose(arq);
}
