#include <stdio.h>
 
int main()
{
    // Faça um programa que leia números inteiros até que o usuário digite 0. No final, imprima a porcentagem de números positivos, negativos, divisíveis por 2, e divisíveis por 5.
    int numero,total,positivos = 0,negativos = 0,divisiveispor2 = 0,divisiveispor5 = 0;
 
    do
    {
    printf("Digite um número inteiro: ");
    scanf("%d",&numero);
 
    if(numero >= 0){
        positivos++;
    }
 
    if(numero < 0){
        negativos++;
    }
 
    if(numero % 2 == 0){
        divisiveispor2++;
    }
    if(numero % 5 == 0){
        divisiveispor5++;
    }
 
    total++;
 
    } while(numero != 0);
 
    printf("Porcentagem de números positivos: %.2f\n", positivos / (float)total * 100);
    printf("Porcentagem de números negativos: %.2f\n", negativos / (float)total * 100);
    printf("Porcentagem de números divisíveis por dois: %.2f\n", divisiveispor2 / (float)total * 100);
    printf("Porcentagem de números divisíveis por cinco: %.2f\n", divisiveispor5 / (float)total * 100);
 
    printf("%d",total);
    return 0;
}