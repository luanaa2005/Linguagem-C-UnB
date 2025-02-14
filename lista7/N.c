#include <stdio.h>



int repetidos (int v[10000], int qtd, int index){
    
    int j = 0;
    int elemento = v[index];

    for (int i= 0; i < qtd; i++){
        if(v[i] ==  v[index]){
            j++;
        }
    }
    
    return j - 1;

};