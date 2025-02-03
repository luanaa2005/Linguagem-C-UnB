#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int v[n];                 //esse vetor vai armazenar as pessoas que estao na fila
    for(int i =0; i<n; i++){
        scanf("%d", &v[i]);
    }

    int m, z;
    scanf("%d", &m);

  
    for(int i=0; i<m; i++){
        scanf("%d", &z);
        for(int j =0; j<n; j++){
            if(z==v[j]){
                v[j] =0;

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