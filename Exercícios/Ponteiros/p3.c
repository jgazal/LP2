/*3. Considerando as variáveis e ponteiros definidas abaixo, quais são as atribuições
permitidas?

int x, *ptx, **pp;
float a, *pta, **pf;

a) x = 100;       //OK. Atribuido 100 à variável inteira x.

b) *pta = &a;     //Ok. O ponteiro pta aponta para o endereço de a. Os dois são
                    do tipo float.

c) ptx = &a;      //Não permitido. ptx é do tipo int, portando só pode apontar
                    para uma variável do tipo int, e "a" é do tipo float.

d) *pf = &a;      //Ok. pf e "a" são do mesmo tipo.

e) pp = &pta;     //Não permitido. pp é do tipo int, portando só pode apontar
                    para uma variável do tipo int, e pta é do tipo float.

f) **pf = 7.9;    //Ok. O valor é do tipo float.

g) *ptx = 20;     //Ok. O valor é do tipo int.

h) ptx = x;       //Não permitido. Para essa atribuição deveria ser ptx = &x

i) pp = &x;       //Não permitido. pp é um ponteiro para ponteiro, portando
                   deveria estar apontando para outro ponteiro.

j) pf = &pta;     //Ok. Os dois são do tipo float e pf é um ponteiro para ponteiro
                    que está apontando para o endereço do ponteiro pta.
*/
