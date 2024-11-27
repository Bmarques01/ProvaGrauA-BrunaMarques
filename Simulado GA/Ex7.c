#include <stdio.h>
#include <ctype.h>

int main(){
// Escreva um programa que leia 10 caracteres inseridos pelo usuário. Para cada caractere, o programa deve informar se é uma letra, um número, ou um símbolo especial. Utilize a função isalpha() da biblioteca ctype.h para verificar se o caractere é uma letra, e isdigit() para números.

char caractere;
for (int i = 0; i < 10; i++)
{
 printf("Digite um caractere: ");
 scanf(" %c", &caractere);
 if (isalpha(caractere))
 {
 printf("É uma letra.\n");
 }
 else if (isdigit(caractere))
 {
 printf("É um número.\n");
 }
 else
 {
 printf("É um símbolo especial.\n");
 }
}

return 0;
}