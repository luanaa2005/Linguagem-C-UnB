#include <stdio.h>

int contarNumerosUnicos(int arr[], int tamanho) {
    int contagemUnicos = 0;

    for (int i = 0; i < tamanho; i++) {
        int unico = 1;  // 1 representa verdadeiro

        // Verifica se o número já apareceu anteriormente no array
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                unico = 0;  // 0 representa falso
                break;
            }
        }

        // Se o número for único, aumenta a contagem
        if (unico) {
            contagemUnicos++;
        }
    }

    return contagemUnicos;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int numerosUnicos = contarNumerosUnicos(arr, tamanho);

    printf("Quantidade de números únicos: %d\n", numerosUnicos);

    return 0;
}