/*5A - Crie um programa para calcular a área e o perímetro de m hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área
e o perímetro de um hexágono regular de lado L. A função obedece ao seguinte
protótipo:

void calcula_hexagono(float l, float *area, float *perimetro);

Lembrando que a área e o perímetro de um hexágono regular são dados por:
A = 3l²sqrt(3)/2        P=6l

Para os cálculos, obrigatoriamente você deve utilizar as funções sqrt e pow da
biblioteca math.h. Em seguida crie a função principal do programa e utilize a
função calcula_hexagono para calcular a área e o perímetro de um hexágono de lado 
l informado pelo usuário.    */

#include<stdio.h>
#include<math.h>


void calcula_hexagono(double l, double *area, double *perimetro)
{
	*area = 3*pow(l,2)*sqrt(3)/2;
	*perimetro = 6*l;
}

int main()
{
	double lado;
	double *a, *p;

	printf("Lado do hexagono: ");
	scanf("%lf", &lado);

	calcula_hexagono(lado, a, p);

	printf("Area: %.1lf\n", *a);
	printf("Perímetro: %.1lf\n", *p);

	return 0;
}
