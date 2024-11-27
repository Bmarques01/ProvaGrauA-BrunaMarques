#include <stdio.h>

int main(){
// Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores. Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e exibir uma mensagem indicando o sensor que disparou a ação

    float umidade;
// Processa um sensor de cada vez
for (int i = 1; i <= 5; i++)
{
 printf("Digite a umidade do solo para o sensor %d: ", i);
 scanf("%f", &umidade);
 // Verifica se a umidade está abaixo de 30%
 if (umidade < 30.0)
 {
 printf("Irrigação ativada pelo sensor %d (Umidade: %.2f%%)\n", i,
umidade);
 }
}

return 0;
}