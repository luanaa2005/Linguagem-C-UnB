#include <stdio.h>

int main() {
    int k, n;
    scanf("%d", &n);  
    scanf("%d", &k);  

    int v[n];  
    int aux[k];  

    
    for (int i = 0; i < k; i++) {
        aux[i] = 0;
    }


    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    
    for (int i = 0; i < n; i++) {
        if (v[i] >= 1 && v[i] <= k) {
            aux[v[i] - 1]++;
        }  
    }

    
    int menor = n;  
    for (int i = 0; i < k; i++) {
        if (aux[i] > 0 && aux[i] < menor) {
            menor = aux[i];  
        }
    }

    
    printf("%d", menor);

    return 0;
}