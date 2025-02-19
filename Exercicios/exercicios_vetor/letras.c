#include <stdio.h>

int main(){
    char frase[1001];
    char letra;

    float u = 0; // quantidade de palavras
    int i;
    float v=0;

    scanf("%c", &letra);
    
    scanf(" %[^\n]", frase);

    for(i = 0; frase[i] != '\n'; i++){
        if(frase[i] == '\0'){
            u = u+1;
        }
    }

    for(i = 0; frase[i] != '\n'; i++){
        for(int j = 0; frase[i] != '\0'; j++){
            if(frase[i] == letra){
                v = v+1;
            }
        }
    }

    float calculo = (100 * u) / v;
    

    printf("%f", calculo);


    return 0;
}

