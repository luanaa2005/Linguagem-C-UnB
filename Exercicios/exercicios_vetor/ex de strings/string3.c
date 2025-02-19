//Escreva um programa que leia N strings e imprima o tamanho da maior string

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int maior = 0;
    
    int v[n];  
    
    char s[101];  

    
    for (int i = 0; i < n; i++) {
        scanf("%s", s);  
        int j;
        for (j = 0; s[j] != '\0'; j++) {}
        v[i] = j;  
    }

    
    for (int i = 0; i < n; i++) {
        if(v[i] > maior){
            maior= v[i];
        }  
    }

    printf("%d", maior);


    return 0;
}

