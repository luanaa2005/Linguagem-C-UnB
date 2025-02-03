#include <stdio.h>

int main(){
    //dois jeitos de ler um nome e imprimir na tela:

    char palavra[1001], nome[100];
    char c;

    scanf (" %c", &c) ; // por que o ‘ ’ antes do %c? para evitar que o caractere a ser lido seja um caractere de espaço em branco

    for ( int i =0; i <1001 && c != ' ' && c != '\n' && c != '\t'; i ++) {
        palavra[i] = c ;
        scanf ("%c", &c); // por que nao tem ‘ ’ antes do %c? ele le o espaco em branco
    }


    printf("%s\n", palavra);

    scanf ("%s", nome);
    printf("%s", nome);

    return 0;
} 