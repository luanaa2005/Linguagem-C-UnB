#include <stdio.h>

int main (){
    float  A, G, Ra, Rg;
    scanf("%f%f%f%f", &A, &G, &Ra, &Rg);

    float Va = A/Ra;
    float Vg = G /Rg;

    if (Va < Vg){
        printf("A");
    }
    else {
        printf("G");
    }
    return 0;
}