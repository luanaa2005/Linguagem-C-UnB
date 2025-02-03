#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int v[n];                 //esse vetor vai armazenar as pessoas que estao na fila
    for(int i =0; i<n; i++){
        scanf("%d", &v[i]);
    }

    int m;
    scanf("%d", &m);

    int z[m];                //esse vetor vai armazenar as pessoas que sairam da fila
    for(int i=0; i<m; i++){
        scanf("%d", &z[i]);
    }


    //o proximo vetor tem que armazenar as pessoas que sobraram na fila
    //COMO FAZ ISSO AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA


    int vet[n-m];
    int saiu;
    int h = 0;

    for(int i=0; i<n ; i++){
        saiu = 0;
        
        for(int j=0; j<m ; j++){

            if(v[i]==z[j]){
            saiu = 1;
        }

        }

        if(saiu == 0){
            vet[h] = v[i];
            h++;
        }

    }

    for(int i=0; i<(n-m); i++){
            printf("%d ", vet[i]);
    }



    return 0;
}