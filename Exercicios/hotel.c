#include <stdio.h>

int main () {

    int d, a, n;
    scanf("%d%d%d", &d, &a, &n);
    int diaria = d + a * (n-1);
    int dias = 32 - n;
   
   printf("%d\n", diaria * dias);


    
    return 0;
}