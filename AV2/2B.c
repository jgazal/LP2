/*2B - Considere um arquivo texto com as notas dos alunos de uma disciplina. Os
dados de cada aluno são armazenados em duas linhas do arquivo: uma com o seu
nome (cadeia com até 80 caracteres), e outra com suas quatro notas (P1, P2, P3, P4).
Considere ainda que não existem linhas em branco no arquivo. Um exemplo desse
formato é mostrado abaixo.

João da Silva
2.0 4.3 6.5 3.0
Manuel Santos
7.0 8.2 8.6 9.0
Fulana de Tal
6.0 7.5 7.8 5.5     */

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *arq;
	char nome[81];
	double n1, n2, n3, n4;

	if ((arq = fopen("notas.txt", "w")) == NULL)
	{
		printf("Erro ao criar arquivo\n");
		return -1;
	}

	do
	{
		printf("Digite o nome do aluno ou 0 para sair\n");
		scanf(" %[^\n]80", nome);

		if (strcmp(nome, "0") == 1)
		{
			printf("Digite as 4 notas do aluno\n");
			scanf(" %lf %lf %lf %lf", &n1, &n2, &n3, &n4);
			fprintf(arq, "%s\n%3.1lf %3.1lf %3.1lf %3.1lf\n", nome, n1, n2, n3, n4);
		}
	} while(strcmp(nome, "0") == 1);

	fclose(arq);

	return 0;
}
