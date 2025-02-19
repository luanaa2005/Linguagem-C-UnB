//Escreva um programa que leia N strings e imprima a maior string lida.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int maior = 0;
    char maiors[101] = "";
    char s[101];  

    
    for (int i = 0; i < n; i++) { //le as strings
        scanf("%s", s); 
    

        int j = 0;
        while (s[j] != '\0') { // j sera o tamanho da string lida
         j++;
        }

        if(j>maior){
        maior = j;
        int k = 0;
        while (s[k] != '\0') {
            maiors[k] = s[k]; 
                k++;
        }
        maiors[k] = '\0';
        }
    }
    printf("%s\n", maiors);
    


    return 0;
}

