#include <stdio.h>

int incrementar(int x) { // Corrigido para retornar um int
    x = x + 1;
    printf("Dentro da função: %d\n", x);
    return x; // Retorna o valor incrementado
}

int main() {
    int num = 5;
    int x_na_main = incrementar(num); // Declarando a variável corretamente
    printf("Fora da função: %d\n", x_na_main);
    return 0;
    }