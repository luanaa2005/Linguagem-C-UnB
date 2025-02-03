//Escreva um programa que leia uma string e a imprima ao contrário

#include <stdio.h>

int main(){

    char palavra[1001];
    char c;
    int contador;

    for(int i=0; i<1001 && c != ' ' && c != '\n'; i++){
        scanf("%c", &c);
        palavra[i] = c;
        contador = i;
        contador++;
    }

    for (int i = contador - 1; i >= 0; i--) {
        printf("%c", palavra[i]); 
    }





    return 0;
}