#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int v1[n], v2[n], v3[n], v4[n];

    for(int i=0; i<n; i++){
        scanf("%d", &v1[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d", &v2[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d", &v3[i]);
    }

    for(int i=0; i<n; i++){
        if(v3[i]==0){
            v4[i]= v1[i] + v2[i];
        }
        else if(v3[i]==1){
            v4[i]= v1[i] - v2[i];
        }
        else if(v3[i]==2){
            v4[i]= v1[i] * v2[i];
        }
        else if(v3[i]==3){
            v4[i]= v1[i] / v2[i];
        }
    }

   for (int i = 0; i < n; i++) {
        printf("%d ", v4[i]);
    }


    return 0;
}