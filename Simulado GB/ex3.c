#include <stdio.h>

int main() {
    int vetor[20] = {0, 3, 2, 2, 4, 4, 1, 0, 0, 0, 4, 4, 2, 3, 1, 0, 4, 3, 2, 1};
    
    // Vetor para armazenar a contagem dos números de 0 a 4
    int contagem[5] = {0, 0, 0, 0, 0}; // Inicializa todas as contagens com zero

    // Contagem de cada valor no vetor
    for (int i = 0; i < 20; i++) { // O tamanho do vetor é 20
        if (vetor[i] >= 0 && vetor[i] <= 4) {
            contagem[vetor[i]]++; // Incrementa a contagem para o valor correspondente
        }
    }

    // Exibe a contagem de cada valor
    for (int i = 0; i < 5; i++) { // Para os valores de 0 a 4
        printf("Quantidade de valores %d: %d\n", i, contagem[i]);
    }

    return 0;
}

