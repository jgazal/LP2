/*4. Seja a seguinte sequência de instruções em um programa C:

int *pti;
int i = 10;
pti = &i;

Qual a afirmativa é falsa:
A) pti armazena o endereço de i.
B) *pti é igual a 10.
C) Ao se executar *pti = 20; i passará a ter o valor 20.
D) Ao se alterar o valor de i, *pti será modificado.
E) pti é igual a 10.  */

a) CORRETA. Ponteiros armazenam endereços, e nesse caso "pti" armazena o endereço de "i".
b) CORRETA.  O * acessa o conteúdo do endereço apontado pelo ponteiro, como o ponteiro aponta para "i" então o conteúdo é 10.
c) CORRETa. Ao dizer que o novo conteúdo de onde o ponteiro aponta é 20 então está atribuindo 20 a "i".
d) CORRETA.  "i" e *pti são a mesma coisa.
e) INCORRETA.  "pti" é igual ao endereço de "i",  &i, e não ao valor de "i".

R: A alteranativa "e" é falsa.
