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
    


    int cont=0;
    for(int i=0; i<n && cont<m; i++){
        for(int j=0; j<m ; j++){
            if(v[i]==z[j]){
                v[i]=0;
                cont++;
        }

        }
    }

    for(int i=0; i<n; i++){
            if(v[i]!=0){
                printf("%d ", v[i]);
        }

        }
    

    return 0;
}