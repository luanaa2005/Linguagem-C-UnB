O que é um struct? 
-

Agrupa várias variáveis e de varios tipos em uma única estrutura;

Funciona como um container:

▶ Armazena diversos dados relacionados

▶ Podendo ser de diversos tipos

Formato:
-
```c
struct nome_da_estrutura{
    tipo1 campo1;
    tipo2 campo2;
}
```

Cada um dos elementos (variáveis) é denominado campo

Exemplo variável do tipo cadastroAluno:

```c
struct cadastroAluno{
    int ra;
    int idade;
} alu, alu1, alu2;
```


Onde declarar?
-
```c
#include <stdio.h>

struct cadastroAluno{
    int ra;
    int idade;
};

int main() {
    struct cadastroAluno alu1;
    ...

    return 0;
}
```
Acesso
-
```c
// criacao do tipo
struct cadastroAluno{
    int ra;
    int idade;
};

// declaracao da variavel
struct cadastroAluno alu, alu1, alu2;
...
printf("%d\n", alu1.ra);
printf("%d\n", alu1.idade);
```
Inicializar:
-
```c
// inicializacao na declaracao
struct cadastroAluno alu1 = {12345, 18};

// declaracao
struct cadastroAluno alu2;

// inicializacao pela entrada padrao
scanf("%d", &alu2.ra);
scanf("%d", &alu2.idade);

// acesso e impressão
printf("%d %d\n", alu1.ra, alu1.idade);
printf("%d %d\n", alu2.ra, alu2.idade);
```
Copiar structs:
-
```c
struct cadastroAluno alu1 = {12345, 18};
struct cadastroAluno2;

alu2 = alu1; // por copia
alu2.ra = 99999; // nao altera o original!

// acesso e impressao
printf("%d %d\n", alu1.ra, alu1.idade); //12345, 18
printf("%d %d\n", alu2.ra, alu2.idade); //99999, 18
```
Estruturas aninhadas- registro dentro de registro:
-
```c
struct data{
    int dia, mes, ano;
};
struct ficha_cadastral{
    long int cpf;
    struct data nascimento;
    struct data cadastro;
};

// declaracao
struct ficha_cadastral aluno;

// leitura e acesso
scanf("%ld", &aluno.cpf);

scanf("%d %d %d", &aluno.nascimento.dia,
                   &aluno.nascimento.mes,
                   &aluno.nascimento.ano);

scanf("%d %d %d", &cadastro.nascimento.dia,
                   &cadastro.nascimento.mes,
                   &cadastro.nascimento.ano);
```
Struct dentro de struct que possui struct:
-

```c
struct data {
    int dia, mes, ano;
};

struct disciplina {
    int codigo, periodo;
};

struct aluno {
    int ra;
    struct data nascimento;
    struct data cadastro;
};

struct matricula {
    struct disciplina materia;
    struct aluno participante;
};
```
Registro com vetores:
-
```c
typedef struct cadastroProduto Produto;

struct cadastroProduto{
    int codigo;
    float preco;
    struct data entrada;
    int tamanho_qtde[6]; 
}

Produto camiseta;
scanf("%d %f %d/%d/%d", &camiseta.codigo,
                        &camiseta.preco,
                        &camiseta.entrada.dia,
                        &camiseta.entrada.mes,
                        &camiseta.entrada.ano);

for(int i=0; i<6; i++){
    scanf("%d", &camiseta.tamanho_qtde[i]);
}

  