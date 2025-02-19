#include <stdio.h>

int main(){

    int n;
    scanf("%d", n);

    int a [n*2][n];

    int lin , col ;

    for ( lin =0; lin <n*2; lin ++){
        for ( col =0; col <n; col ++){
            scanf ("%d", & a[ lin ][ col ]) ;
        }
    }


     for ( lin =0; lin <n*2; lin ++) {
        for ( col =0; col <n; col ++){
            printf ("%d ", a[ lin ][ col ] + b[ lin ][ col ]) ;
 }
    printf ("\n") ;
  }



    return 0;
}