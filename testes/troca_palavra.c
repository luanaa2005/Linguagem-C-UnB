#include <stdio.h>
#include <string.h>

void substituirPalavra(char *frase, const char *palavraAntiga, const char *palavraNova) {
    char resultado[1000];  // Buffer para armazenar a nova frase
    char *posicao;
    int indice = 0;
    int tamanhoAntiga = strlen(palavraAntiga);

    // Inicializa o resultado com uma string vazia
    resultado[0] = '\0';

    while ((posicao = strstr(frase, palavraAntiga)) != NULL) {
        // Copia parte da frase até a palavra encontrada
        int numCaracteres = posicao - frase;
        strncat(resultado, frase, numCaracteres);
        
        // Adiciona a nova palavra
        strcat(resultado, palavraNova);

        // Atualiza a frase para o ponto após a palavra substituída
        frase = posicao + tamanhoAntiga;
    }

    // Adiciona o restante da frase
    strcat(resultado, frase);

    // Copia o resultado de volta para a frase original
    strcpy(frase, resultado);
}

int main() {
    char frase[1000] = "O carro é azul. O carro está na garagem.";
    const char *palavraAntiga = "carro";
    const char *palavraNova = "bicicleta";

    printf("Frase original: %s\n", frase);

    substituirPalavra(frase, palavraAntiga, palavraNova);

    printf("Frase modificada: %s\n", frase);

    return 0;
}