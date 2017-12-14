/*4A - Faça um programa que:
a) declare duas variáveis a e b do tipo float;
b) declare um ponteiro "p" para o tipo float;
c) Peça que o usuário digite um número do tipo real, e o armazene em a; p aponta para b;
d) Imprima o conteúdo de a;
e) Imprima o endereço de a; O conteúdo apontado por p recebe a;
f) Imprima o conteúdo de p;
g) Imprima o endereço de p;
h) Imprima o conteúdo do endereço apontado por p;
i) Imprima o conteúdo de b;
j) Imprima o endereço de b.     */

#include <stdio.h>

int main()
{
	float a, b, *p;
	
	printf("Digite um número real: ");
	scanf("%f", &a);
	p = &b;
	printf("Conteúdo de a: %.1f\n", a);
	printf("Endereço de a: %p\n", &a);
	*p = a;
	printf("Conteúdo de p: %.1f\n", *p);
	printf("Endereço de p: %p\n", &p);
	printf("Conteúdo do endereço apontado por p: %.1f\n", *(*&p));
	printf("Conteúdo de b: %.1f\n", b);
	printf("Endereço de b: %p\n", &b);

	return 0;
}
