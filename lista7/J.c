#include <stdio.h>
#include <math.h>




struct tipoPonto{
    int x;
    int y;
};




double distancia (struct tipoPonto pa , struct tipoPonto pb){

    double d;

    d = sqrt(((pb.x -pa.x) * (pb.x -pa.x)) + ((pb.y -pa.y) * (pb.y -pa.y)));

    return d;


};