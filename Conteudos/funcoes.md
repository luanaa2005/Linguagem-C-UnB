O que é uma função?
-
- Programas que fazem uma tarefa específica

Exemplo:
```c
int area_triangulo(){
    float base, altura;
    scanf("%f". &base, &altura);
    return (base*altura)/2;
}
```
Retorno:
-
- A função scanf retorna o número de itens d entrada combunados e atribuídos com sucesso:

- A função printf retorna o número de caracteres impressos

Criação da função: 
-
```c
#include <stdio.h>

int par(){
    int a;
    while(scanf("%d", &a) == 1 && a%2!=0);
    return a;
}

int soma_pares(){
    int a = par() + par();
    return a;
}

int main(){
    printf("%d\n", soma_pares());
    return 0;
}
```

- Protótipo: assinatura da função 

Invocação/chamada da função:
-
Quando a funcao eh chamada, o fluxo de execução do programa eh desviado

```c
int soma(){
    int a = 5;
    int b = 10;
    int c = a + b;
    return c;
}
int main(){
    int c;
    c = soma();

    return 0;
}
```
- Quando usado como um tipo de retorno da função, a palavra-chave void especifica que a função não retorna um valor. Quando usado para a lista de parâmetros de uma função, um item nulo especifica void que a função não usa parâmetros
- Parâmetros são variáveis locais da função

Parâmetros: passagem por valor ou cópia
-
- Passagem somente de um valor
- Cópia do valor original
- Não altera a variável original que forneceu o valor

Exemplo:
```c
void teste (char k){
    printf("%c\n", k);
    k = 'a'; //alterando o valor de k
    printf("%c\n", k); //a
}

int main(){
    char k = 'b';

    teste(k); //passando uma copia do valor de k
    printf("%c\n", k); //b

    return 0;
}
```
Parâmetros: passagem por referência:
- 
- Função que troca o valor de dois parâmetros passandoo endereço da variável original
- As alterações sãofeitas no endereço da variável original

Passagem por referência- ponteiro
- 
- Variáveis capazes de armazenar e manipular endereços de memória
- Símbolo *
- Sintaxe: TIPO *ponteiro

Exemplo:

```c
void troca(int *p, int *q){
    //conteudo de t = conteudo do apontado por p
    int t = *p;

    //conteudo do apontado por p = conteudo do apontado por q
    *p = *q;

    //conteudo do apontado por q =conteudo de t
    *q = t;
}

int main(){
    int a = 3, b=9;
    troca(&a, &b);
    printf("%d %d\n", a, b);
}
```