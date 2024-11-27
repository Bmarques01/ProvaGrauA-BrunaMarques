#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int array[], int n) {
    for (int i = 0; i < n; i++) {
        // Sorteia dois índices aleatórios
        int i_rand = rand() % n;
        int j_rand = rand() % n;

        // Troca os elementos nas posições i_rand e j_rand
        int temp = array[i_rand];
        array[i_rand] = array[j_rand];
        array[j_rand] = temp;
    }
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(0));

    int array[] = {1, 2, 3, 4, 5}; // Exemplo de array
    int n = sizeof(array) / sizeof(array[0]); // Tamanho do array

    printf("Array inicial: ");
    printArray(array, n);

    shuffle(array, n);

    printf("Array embaralhado: ");
    printArray(array, n);

    return 0;
}
