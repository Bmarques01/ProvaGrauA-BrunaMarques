#include <stdio.h>

int main (){

    int vet[3] = {10, 20, 30}; //so pode definir valores quando for declarar o vetor
    int i;

    //sempre comeca por 0. um vetor de 3 (0,1,2)

    // criar um for com i pra ser a variavel de controle p assumir posicoes, mais simples
    //estrutura de repeticao p navegar dentro do vetor e ir imprimindo cada um

    for(i = 0; i < 3; i++){
        printf("%d\n",vet[i]); 
    }
    
    //em casos de o user definir os valores
    int vetdois [3] = {0, 0, 0};

    for(i = 0; i < 3; i++){
        printf("Insira o elemento da posicao %d: ",i);
        scanf("%d ", vetdois[i]);
    }
// criar um segundo for p exibir os valores
     for(i = 0; i < 3; i++){
        printf("%d ", vetdois[i]);
    }

    return 0;
}