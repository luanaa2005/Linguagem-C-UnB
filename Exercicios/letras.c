#include <stdio.h>

int main(){
    char nome[101];
    char letra;

    scanf("%c", &letra);
    printf("%c", letra);

    scanf(" %100[^\n]", nome);

    printf("%s", nome);



    return 0;
}