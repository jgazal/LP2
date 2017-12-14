/*2. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das
seguintes expressões de atribuição são ilegais?
a) p = &i;        b) *q = &j;         c) p = &*&i;        d) i = (*&)j;
e) i = *&j;       f) i = *&*&j;       g) q = *p;          h) i = (*p)++ + *q  */

a) p = &i;    //o ponteiro aponta para o endereço da variável "i".

b) *q = &j;   //INCORRETO
              //*q é o conteúdo do endereço apontado por "q" (um int) que recebe o
              //endereço da variável "j".

c) p = &*&i;  //&i: endereço de "i";
              //*&i: conteúdo do endereço de "i", ou seja: "i";
              //&*&i: endereço do conteúdo apontado pelo endereço de "i", ou seja: o endereço de "i".

d) i = (*&)j; //INCORRETO.
              //"i" não é ponteiro.
              //Se a ordem fosse *(&j) então "i" receberia o conteúdo de "j"; o mesmo que "i" = "j".

e) i = *&j;   //"i" não é ponteiro, mas de acordo com a precedência dos operadores é equivalente a *(&j), ou seja "j".

f) i = *&*&j;  //"i" não é ponteiro, mas *&j é um int, assim como *&*&j que é o próprio "j".

g) q = *p;    //INCORRETO
              //*p é um ponteiro para int e não um int.

h) i = (*p)++ + *q  //(O conteúdo apontado por "p" é incrementado em 1) + o conteúdo apontado por "q".

R: b, d e g são expressões de atribuições ilegais.
