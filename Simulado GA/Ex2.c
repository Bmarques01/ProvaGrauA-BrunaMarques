#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
    srand(time(0));

int a = rand() % (670 - 130 + 1) + 130; // a. Um número entre 130 e 670.
printf("Número sorteado entre 130 e 670: %d\n", a);

int b = rand() % (-5 - (-20) + 1) - 20; // b. Um número entre -20 e -5.
printf("Número sorteado entre -20 e -5: %d\n", b);

int c = rand() % (10 - (-10) + 1) - 10; // c. Um número entre -10 e 10.
printf("Número sorteado entre -10 e 10: %d\n", c);


// d. Um número entre 10.5 e 50.2, com uma casa decimal.
// Multiplicando os limites por 10 para trabalhar com inteiros
int minimo = 105; // 10.5 * 10
int maximo = 502; // 50.2 * 10
// Sorteando um número inteiro entre 105 e 502
int numeroSorteado = rand() % (maximo - minimo + 1) + minimo;
// Dividindo por 10 para obter o valor com uma casa decimal
float resultado = numeroSorteado / 10.0;
//OU: float numero4 = ((rand() % (500 + 1)) / 10.0) + 10.5; obs: 10.5 + [0.0, 49.7]
printf("Número sorteado entre 10.5 e 50.2: %.1f\n", resultado);

// e. Um número entre 0 e 100, que seja múltiplo de 5.
// Existem 21 múltiplos de 5 entre 0 e 100 (inclusive).
// Sorteamos um número entre 0 e 20 com rand() % 21, e depois multiplicamos por 5.
// Isso garante que o valor sorteado será um múltiplo de 5.
int e = (rand() % 21) * 5;
printf("Número sorteado entre 0 e 100 (múltiplo de 5): %d\n", e);

// Um caractere entre 'A' (65) e 'Z' (90).
// O caractere 'A' tem valor ASCII 65, e 'Z' tem 90.
// A fórmula rand() % (90 - 65 + 1) + 65 sorteia um valor numérico no intervalo de ASCII para 'A' a 'Z'
// Depois, esse valor é convertido de número para caractere pelo printf.
char f = rand() % ('Z' - 'A' + 1) + 'A';
printf("Caractere sorteado entre 'A' e 'Z': %c\n", f);

    return 0;
}