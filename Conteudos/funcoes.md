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

Parâmetros: passagem por referência:
- 
- Função que troca o valor de dois parâmetros passando o endereço da variável original
- As alterações são feitas no endereço da variável original

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

Passagem por cópia
- 

- cópia do valor original 
- valor que inicializa o parâmetro (variável local) da função
- não altera a variável original que forneceu o valor
- variável da função é diferete da variável original

```c
#include <stdio.h>

void incrementar(int x) {
    x = x + 1;
    printf("Dentro da função: %d\n", x);
}

int main() {
    int num = 5;
    incrementar(num); 
    printf("Fora da função: %d\n", num);
    return 0;
    }

//Dentro da função: 6
//Fora da função: 5

```


A variável num na main() não é alterada pela função incrementar(), pois os argumentos são passados por valor em C. Se você quiser modificar num diretamente, teria que passar um ponteiro, ex:

```c
#include <stdio.h>

void incrementar(int *x) { // Agora recebe um ponteiro
    (*x) = (*x) + 1;
    printf("Dentro da função: %d\n", *x);
}

int main() {
    int num = 5;
    incrementar(&num); // Passa o endereço de num
    printf("Fora da função: %d\n", num);
    return 0;
}
```
Agora num é modificado diretamente dentro da função.


# Passagem por cópia X Passagem por referência
## Por cópia:
Quando Usar?

✅ Quando a função não precisa modificar a variável original.

Exemplo: Funções matemáticas que apenas processam dados sem alterá-los.

✅ Quando os dados são pequenos e simples (ex: int, float, char).

Passar valores pequenos por cópia é eficiente.

✅ Quando você quer proteger a variável original contra alterações.

Útil em funções que só devem usar o valor sem alterá-lo.
## Por referência:

Quando Usar?

✅ Quando a função precisa modificar a variável original.

Exemplo: Atualizar um contador, modificar um array, trocar valores.

✅ Quando os dados são grandes e complexos (ex: structs, arrays).

Evita cópias desnecessárias, economizando memória e processamento.

✅ Quando a função deve retornar mais de um valor.

