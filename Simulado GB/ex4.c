#include <stdio.h>
#include <string.h>

const int MAX_LIVROS = 5; // Número de livros
const int TAM = 100;      // Tamanho máximo das strings
//Da pra definir direto entre [] n precisa criar const

struct Livro {
    char titulo[TAM];
    char autor[TAM];
    int ano;
    int paginas;
};

struct Livro cadastrarLivro(char titulo[], char autor[], int ano, int paginas) {
    struct Livro livro;
    strncpy(livro.titulo, titulo, TAM);
    strncpy(livro.autor, autor, TAM);
    livro.ano = ano;
    livro.paginas = paginas;
    return livro;
}

void exibirLivro(struct Livro livro) {
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de Publicacao: %d\n", livro.ano);
    printf("Numero de Paginas: %d\n\n", livro.paginas);
}

int main() {
    struct Livro biblioteca[MAX_LIVROS];
    char titulo[TAM], autor[TAM];
    int ano, paginas;

    for (int i = 0; i < MAX_LIVROS; i++) {
        printf("Cadastro do Livro %d\n", i + 1);
        printf("Titulo: ");
        fgets(titulo, TAM, stdin);
        titulo[strcspn(titulo, "\n")] = 0;

        printf("Autor: ");
        fgets(autor, TAM, stdin);
        autor[strcspn(autor, "\n")] = 0;

        printf("Ano de Publicacao: ");
        scanf("%d", &ano);
        printf("Numero de Paginas: ");
        scanf("%d", &paginas);
        getchar();

        biblioteca[i] = cadastrarLivro(titulo, autor, ano, paginas);
    }

    printf("\nLivros Cadastrados:\n");
    for (int i = 0; i < MAX_LIVROS; i++) {
        printf("Livro %d:\n", i + 1);
        exibirLivro(biblioteca[i]);
    }

    return 0;
}
