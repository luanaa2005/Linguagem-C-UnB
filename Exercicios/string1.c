//Escreva um programa que leia uma string e imprima o tamanho string lida

#include <stdio.h>

int main(){

    char palavra[1001];
    char c;
    int contador=0;

    for(int i=0; i<1001 && c != ' ' && c != '\n'; i++){
        scanf ("%c", &c);
        palavra[i] = c ;
        contador = i;
        

    }

    printf("%d", contador);



    return 0;
}