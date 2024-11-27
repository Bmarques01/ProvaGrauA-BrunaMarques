#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main (){
//Escreva um programa que sorteie um número entre 1 e 100. O usuário deve tentar adivinhar o número sorteado, e o programa deve informar se o palpite está muito alto, muito baixo ou correto. O programa termina quando o usuário acerta o número

int numero, palpite;
srand(time(0));

numero = rand() % 100 + 1;

do
{
 printf("Tente adivinhar o número (entre 1 e 100): ");
 scanf("%d", &palpite);
 if (palpite > numero)
 {
 printf("Muito alto!\n");
 }
 else if (palpite < numero)
 {
 printf("Muito baixo!\n");
 }
 else
 {
 printf("Correto! O número era %d.\n", numero);
 }
} while (palpite != numero);

return 0;
}