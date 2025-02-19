#include <stdio.h>


struct tipoFiliacao{

    char nome[80];
    char nomeMae[80];
    char nomePai[80];

};



struct tipoFiliacao separaLinhaCSV(char linha[240]){

    struct tipoFiliacao filiacao;
    int i, j=0;

    for(i=0; linha[j] != ',' && linha[j] != '\0'; i++, j++){
        filiacao.nome[i] = linha[j];
    }
    filiacao.nome[i] = '\0'; 
    j++;

    for(i=0; linha[j] != ',' && linha[j] != '\0'; i++, j++){
        filiacao.nomeMae[i] = linha[j];
    }
    filiacao.nomeMae[i] = '\0'; 
    j++;

    for(i=0; linha[j] != ',' && linha[j] != '\0'; i++, j++){
        filiacao.nomePai[i] = linha[j];
    }
    filiacao.nomePai[i] = '\0'; 
    


    return filiacao;
};