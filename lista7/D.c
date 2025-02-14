#include <stdio.h>

double fogo (int nivel ) {
    if (nivel == 1){
        return 2.0;
    }
    else if(nivel == 2){
        return 3.0;
    }
    return 5.0;
};

double agua (int nivel ){
    if (nivel == 1){
        return 1.0;
    }
    else if(nivel == 2){
        return 2.5;
    }
    return 4.0;
};

double terra (int nivel) {

    if (nivel == 1){
        return 2.5;
    }
    else if(nivel == 2){
        return 5.5;
    }
    return 7.0;
};

double calculaVantagem (int tipoPlayer, int tipoCPU){

    double calcula[3][3] = {
        {1.0, 0.5, 2.0},
        {2.0, 1.0, 0.5},
        {0.5, 2.0, 1.0}
    };

    return calcula[tipoPlayer-1][tipoCPU-1];
};


double calculaDano (int tipoPlayer, int nivelPlayer, int tipoCPU, double defesaCPU){
     

};