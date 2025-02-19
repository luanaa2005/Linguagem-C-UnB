#include <stdio.h>


int main(){
    
    char n[16];

    for(int i =0; i != '\n'; i++){
        scanf("%c", &n[i]);
        if(n[i] == 'A' || 'B' || 'C'){
            n[i] =2;
        }
        else if(n[i] == 'D' || 'E' || 'F'){
            n[i] =3;
        }
        else if(n[i] == 'G' || 'H' || 'I'){
            n[i] =4;
        }
        else if(n[i] == 'J' || 'K' || 'L'){
            n[i] =5;
        }
        else if(n[i] == 'M' || 'N' || 'O'){
            n[i] =6;
        }
        else if(n[i] == 'P' || 'Q' || 'R' || 'S'){
            n[i] =7;
        }
        else if(n[i] == 'T' || 'U' || 'V' || 'S'){
            n[i] =8;
        }
        else if(n[i] == 'W' || 'X' || 'Y' || 'Z'){
            n[i] =9;
        }
    }
   
   for(int i =0; i != '\n'; i++){
    printf("%c", n[i]);
   }


    return 0;
}