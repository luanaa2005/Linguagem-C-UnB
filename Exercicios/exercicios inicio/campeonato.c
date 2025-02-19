#include <stdio.h>

int main (){

    int Cv, Ce, Cs, Fv, Fe, Fs;
    scanf("%d%d%d%d%d%d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);

    Cv = Cv * 3;
    Fv = Fv * 3;
    int saldoC = Cv + Ce;
    int saldoF = Fv + Fe;

    if (saldoC > saldoF){
        printf("C");
    }
    else if (saldoF > saldoC){
        printf("F");
    }
    else if (saldoC == saldoF){
        if (Cs>Fs)
            printf("C");
        else if (Fs>Cs){
            printf("F");
        }
        else {
            printf("=");
        }
    }
    
    return 0;
}