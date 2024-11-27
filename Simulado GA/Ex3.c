#include <stdio.h>

int main() {
    //Imagine que você está administrando uma fazenda de abelhas. A cada mês, a colmeia inicial dobra de tamanho, mas 3% das abelhas migram para outras colmeias devido às mudanças sazonais. Escreva um programa que leia o número de meses e a população inicial da colmeia, e exiba a população ao final de cada mês, considerando a migração.
   int meses;
float populacao;
printf("Digite a população inicial da colmeia: ");
scanf("%f", &populacao);
printf("Digite o número de meses: ");
scanf("%d", &meses);
for (int i = 1; i <= meses; i++)
{
 // Dobrar a população
 populacao = populacao * 2;
 // Subtrair os 3% de abelhas migradas
 populacao = populacao - (populacao * 0.03);
 printf("Mês %d: População = %.2f\n", i, populacao);
}

    return 0;
}