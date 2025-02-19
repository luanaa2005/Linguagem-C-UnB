//fazer uma função que faz contas de adição e subtração e retorna o resultado

#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int num;
    int resultado = 0;

    scanf("%d", &num);
    resultado = num;
    
    for(int i=1; i < parcelas; i++){
        scanf("%d", &num);
        if(op == '+'){
            resultado = resultado + num;
        }
        else if(op == '-') {
            resultado = resultado - num;
        }
    }

    return resultado;
};