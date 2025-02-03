#include <stdio.h>

int main (){
    int d, a, l, p;
    scanf("%d%d%d%d",&d, &a, &l, &p);

    if (d <= a && d<=l){
        if (d<=p)
        printf("S");
    }
    else{
        printf("N");
    }

    return 0;
}