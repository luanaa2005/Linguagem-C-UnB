//Faça um programa que dado dois conjuntos de palavras, verifica se alguma palavra do segundo conjunto
//pertence ao primeiro conjunto de palavras.
#include <stdio.h>

int main(){

int n, m;

scanf("%d%d", &n, &m);


int v1[80][n];
int v2[80][m];


for(int i = 0; i <80; i++){
    for(int j = 0; j<n; j++){
        scanf(" %c", &v1[i][j]);
    }
}

int pertence = 0;

for(int i = 0; i <80; i++){
    for(int j = 0; j<80; j++){
        scanf(" %c", &v2[i][j]);
        if(v2[i][j] == v1[i][j]){
            pertence = 1;
            break;
        }
    }
}

printf("%d", pertence);

return 0;
}


