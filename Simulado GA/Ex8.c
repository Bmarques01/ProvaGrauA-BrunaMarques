#include <stdio.h>

int main(){

//Você está desenvolvendo um programa para monitoramento de uma área de floresta. A cada 
//dia, são feitos registros da quantidade de chuva (em mm). Escreva um programa que leia os 
//registros diários de chuva para uma semana e informe:
//a. O total de chuva acumulada.
//b. O dia com maior quantidade de chuva.
//c. Se em algum dia a chuva foi menor que 5 mm, exiba uma mensagem de alerta sobre 
//possível seca

float chuva, total = 0, maior = 0;
int diaMaior = 0;
for (int i = 1; i <= 7; i++)
{
 printf("Digite a quantidade de chuva no dia %d (mm): ", i);
 scanf("%f", &chuva);
 // Acumula o total de chuva
 total += chuva;
 // Verifica se é o maior valor de chuva
 if (chuva > maior)
 {
 maior = chuva;
 diaMaior = i;
 }
 // Alerta de seca se a chuva for menor que 5 mm
 if (chuva < 5.0)
 {
 printf("Alerta de seca no dia %d: %.2f mm de chuva\n", i, chuva);
 }
}
// Exibe os resultados
printf("Total de chuva acumulada: %.2f mm\n", total);
printf("Dia com maior quantidade de chuva: Dia %d (%.2f mm)\n", diaMaior,
maior);


    return 0;
}