#include <stdio.h>

int main (){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int x = a / 2;
    int y = b / 3;
    int z= c / 5;


    if (x <= y && x<=z){
            printf("%d", x);
        }
    else if (y <= x && y <= z) {
        printf("%d",y);
    }
    else if (z <= x && z <= y){
        printf("%d",z);
    }

    return 0;
}