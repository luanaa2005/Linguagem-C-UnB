#include <stdio.h>


int main(){

    int v[100001];
    int num;

    int v2[100001];

    int i;

    for( i = 0; scanf("%d", &v[i])==1 && v[i] != 0; i++);


    scanf("%d", &num);

   int soma = 0;
   int j = 0;

   for(i = 0; v[i] != 0; i++){
    soma = soma + v[i];
    if(soma > num){
        v2[j] = v[i];
        j++;
        soma = 0;
    }
    
}
    for(int i=j; i>=0; i--){
       printf("%d\n", v2[i] );
    }


 

    return 0;
}