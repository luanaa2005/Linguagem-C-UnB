#include <stdio.h> 
int main () {

    int x, y;
    scanf("%d%d", &x, &y);

    
    if (x <= 432 && y <= 468){
        if (x < 0 || y < 0)
        printf("fora");
        else 
        printf("dentro");
    }
    else {
        printf("fora");
    }
   

    return 0;
}