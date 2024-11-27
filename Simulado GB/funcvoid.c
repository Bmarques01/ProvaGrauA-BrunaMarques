#include <stdio.h>

//nao retorna valor
//usar fora do main
//Para funções que executam uma ação, como exibir mensagens ou modificar variáveis globais, mas não calculam ou retornam resultados.

void imprimirMensagem() {
    printf("Olá, mundo!\n");
}

int main (){
    imprimirMensagem();
    
    return 0;
}