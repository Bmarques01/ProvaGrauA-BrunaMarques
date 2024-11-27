#include <stdio.h>

//struct serve para criar variaveis dentro de uma variavel
struct produto{
    int cod;
    float valor;
};

int main(){
//cria outra variavel p (?)
    struct produto p;
    printf("Digite o codigo do produto:\n");
    scanf("%d",& p.cod);

    printf("Digite o valor do produto:\n");
    scanf("%f",& p.valor);

    printf("Os dados são:\n");
    printf("Codigo: %d\n", p.cod);
    printf("Valor: %2.f\n",p.valor);

    return 0;
}