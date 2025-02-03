Arquivos 
- 
- Arquivos são usados para armazenamento permanente de grandes quantidades de dados em dispositivos de armazenamento secundárip, como discos
- Um arquivo (= file) é uma sequência de bytes que reside na memória secundária

Ponteiro do tipo FILE
- 

- Recebe/aponta o endereço da estrutura que contém informações de sistema sobre o arquivo

Abrindo arquivos
- 
Função fopen:
```c
FILE *fp1. *fp2;
fp1 = fopen("data.txt", "r");
fp2 = fopen("imagem.pgm", "w");
```
- O primeiro argumento da função é o nome do arquivo 
- O segundo argumento é o modo que será aberto o arqruivo: 

▶ "r": somente leitura (do início do arquivo)

▶ "r+": leitura e escrita (do início do arquivo)

▶ "w": escrita
- sobreescreve/insere o conteúdo a partir do início
- cria se não existir

▶ "w+": leitura e escrita
- sobreescreve/insere o conteúdo a partir do início
- cria se não existir

▶ "a": escrita
- continua/insere o conteúdo a partir do fim
- cria se não existir

▶ "a+": leitura e escrita
- continua/insere o conteúdo a partir do fim
- cria se não existir

Processando arquivo de texto (caracteres)
- 
- A função fprintf() escreve no arquivo conectado ao fp;

```c
FILE * t;
t = fopen (" teste ", "w");
fprintf (t , " Ola mundo \n");

int a =10;
char b []=" lala ";
fprintf (t , "%d %s\n", a , b);
```

Fechando arquivos
- 
▶ Função fclose:
```c
FILE * fp ;
fp = fopen (" data . txt ", "r");
...
fclose ( fp );
```
O protótipo da função fopen() é:
```c
int fopen ( FILE *) ;
```

Exercício
- 
- Crie atrav´es da fopen um arquivo chamado “teste.txt”
- Insira 10 linhas com frase ”teste de arquivo x”, sendo x de 1 até 10
- Feche o arquivo

```c
char linha [100];
FILE * origem ;

origem = fopen (" hino . txt ", "w") ;

if( origem != NULL )
{
while (int i =1; i <=10; i ++)
{
    fprintf ( destino , " teste de arquivo %d\n", i);
}
fclose ( origem );
}
else
{
printf (" Arquivo nao encontrado \n");
}
```






