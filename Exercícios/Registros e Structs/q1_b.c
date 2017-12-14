/* 1 – Faça a declaração das variáveis representadas abaixo, utilizando a Linguagem C:

b) Aluno
            |      NOME       |
            |MATRÍCULA | SEXO |     0  1  2  3   4
            |      NOTAS      | => |  |  |  |  |  |    */

typedef struct aluno
{
    char nome[50];
    char sexo;
    int matricula;
    float notas[5];

} ALUNO;
