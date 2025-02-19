//Faça um programa que leia dois vetores de mesmo tamanho e imprima a soma dos dois vetores.

#include <stdio.h>

int main(){

    int n; //numero de posicoes que o vetor vai ter

    scanf("%d", &n); //leitura do numero de posicoes

    int v1[n], v2[n]; //declaracao de um vetor com n posicoes 

    for (int i= 0; i<n; i++){ //declaracao de uma variavel auxiliar para percorrer o vetor enquanto i for menor que n
        scanf("%d", &v1[i]); // leitura de n numeros na posicao i do vetor 

    }

    //leitura do segundo vetor:
    for (int i= 0; i<n; i++){
         scanf("%d", &v2[i]);

    }

    //soma de vetores:
    int soma=0;
    for (int i= 0; i<n; i++){
        soma = v1[i] + v2[i];
        printf("%d", soma);
    }

    
        


    return 0;
}