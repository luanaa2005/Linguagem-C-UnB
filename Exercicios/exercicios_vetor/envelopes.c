#include <stdio.h>

int main(){

    int k, n, v[1001];
    scanf("%d", &n);
    scanf("%d", &k);
    int aux[1000001];

    for(int i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<k; j++){
            if(v[j]==v[i]){
                aux[j] = v[j];
            }
        }
    }


    int menor = 1000001;
    for(int i = 0; i<n; i++){
        if(aux[i]<menor){
            menor = aux[i];
        }
    }

    

    printf("%d", menor);




    return 0;
}