#include <stdio.h> 
int main () {

    int x, y;
    scanf("%d%d", &x, &y);

    if (x >= 0 && x <= 468) {
         if (y >=0 && y <432){
        printf("dentro");

    }  
    }
    else {
        printf("fora");
    }
   

    return 0;
}