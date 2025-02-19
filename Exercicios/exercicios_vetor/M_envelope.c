#include <stdio.h>

int main(){
    int n, qtdBalas;
    scanf("%d %d", &n, &qtdBalas);
    int min = n;
    
    int tipos[1001] = {0};
    
    for(int i = 0; i < n; i++){
        int atual;
        scanf("%d", &atual);
        tipos[atual]++;
    }
    
    for(int i = 1; i <= qtdBalas; i++)
        if(tipos[i] < min) min = tipos[i];
    
    printf("%d\n", min);
    return 0;
}