#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Essa função tem como objetivo trocar os elementos de um array de forma aleatória, embaralhando os valores.

// Função shuffle para embaralhar um array
void shuffle(int array[], int n) {
    for (int i = 0; i < n; i++) {
        // Gera um índice aleatório para troca
        int j = rand() % n;

        // Troca os elementos array[i] e array[j]
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Define o array para embaralhar (simulando um baralho)
    int baralho[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(baralho) / sizeof(baralho[0]);

    printf("Baralho original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", baralho[i]);
    }
    printf("\n");

    // Embaralha o baralho
    shuffle(baralho, tamanho);

    printf("Baralho embaralhado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", baralho[i]);
    }
    printf("\n");

    return 0;
}