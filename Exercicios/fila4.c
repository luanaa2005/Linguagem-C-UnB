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
    
    int saiu;
   

    for(int i=0; i<n ; i++){
        saiu = 0;
        
        for(int j=0; j<m ; j++){

            if(v[i]==z[j]){
            saiu = 1;
            break;
        }

        }

        if(saiu == 0){
           printf("%d ",  v[i]);
        }

    }

   



    return 0;
}