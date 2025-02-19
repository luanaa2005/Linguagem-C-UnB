//Faça um programa que leia uma sequência S de palavras e uma sequência de palavras P e diga se alguma palavra de P
//existe na sequência S .
//Dica: faça uma função de comparação de strings. Não utilize a função strcmp.


#include <stdio.h>

int compare(char *str1, char *str2){
    int i;
    for(i=0; str1[i] != '\0' && str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            return 0;
        }
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
        return 1;
    }
}

typedef struct {
    char str[1000][80]; 
} armazena;

int main(){
    armazena strings1;
    char string2[80];
    int n, m;
    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%s", strings1.str[i]);
    }

    for(int j=0; j<m; j++){
        scanf("%s", string2);
        if (compare(strings1.str[i], string2)) {
            int sao = 1;
        } else {
            int sao = 0;
        }
    }
    
    printf("%d", &sao);


    return 0;
}


 