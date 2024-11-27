#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar a matriz com toupeiras
void gerarToupeiras(char matriz[4][4]) {
    // Preenche a matriz com o símbolo '-' (buracos vazios)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = '-';
        }
    }

    // Coloca 4 toupeiras na matriz em posições aleatórias
    for (int t = 0; t < 4; t++) {
        int i, j;
        do {
            // Sorteia uma posição aleatória na matriz
            i = rand() % 4;
            j = rand() % 4;
        } while (matriz[i][j] == 'T');  // Garante que a posição não está ocupada por uma toupeira

        // Coloca a toupeira na posição sorteada
        matriz[i][j] = 'T';
    }
}

// Função para imprimir a matriz
void imprimirMatriz(char matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa a semente para o gerador de números aleatórios
    srand(time(NULL));

    char matriz[4][4];  // Matriz para armazenar as toupeiras

    // Gera e exibe 3 gerações diferentes de toupeiras
    for (int i = 1; i <= 3; i++) {
        printf("Geração %d:\n", i);
        gerarToupeiras(matriz);
        imprimirMatriz(matriz);
        printf("\n");
    }

    return 0;
}
