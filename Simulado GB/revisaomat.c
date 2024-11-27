#include <stdio.h>

int main(){
        //vetor uma unica linha, matriz pode ser varias linhas, colunas, etc

        int mat[3][3] = {{1,2,3},
                        {4,5,6},
                        {0,0,0}};
        int i, j;
        //i controla as linhas, j controla as colunas

    for(i=0; i<3;i++){
        for(j=0; j<3; j++){
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }

    return 0;
}