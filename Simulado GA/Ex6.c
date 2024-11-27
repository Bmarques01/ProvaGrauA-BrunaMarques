#include <stdio.h>

int main(){
//Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7 dias consecutivos e calcule:
// a. O total de tempo exercitado na semana.
// b. A média de tempo diário.
// c. O dia em que o paciente realizou o maior tempo de exercício.

float tempo, total = 0, maior = 0;
int diaMaior = 0;
for (int i = 1; i <= 7; i++)
{
 printf("Digite o tempo de exercício no dia %d (minutos): ", i);
 scanf("%f", &tempo);
 // Acumula o tempo total
 total += tempo;
 // Verifica se este é o maior tempo
 if (tempo > maior)
 {
 maior = tempo;
diaMaior = i;
 }
}
// Calcula e exibe os resultados
printf("Total de tempo exercitado na semana: %.2f minutos\n", total);
printf("Média diária: %.2f minutos\n", total / 7);
printf("Dia com maior tempo de exercício: Dia %d (%.2f minutos)\n", diaMaior,
maior);

return 0;
}