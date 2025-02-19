#include <stdio.h>

int main(){
    int sim = 0, cont = 0, triagens = 0;
    char resposta[4];

    while(scanf(" %s", resposta) != EOF){
        cont++;
        if(resposta[0] == 's') sim++;
        
        if(cont > 9){
            cont = 0;
            if(sim > 1) triagens++;
            sim = 0;
        }
    }

    printf("%d\n", triagens);
    return 0;
}