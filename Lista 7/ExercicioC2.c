<<<<<<< HEAD
#include <stdio.h>

int main() {
    int M[4][4];
    int somaAbaixoDiagonal = 0;

    // Preenche a matriz 4x4
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Calcula a soma dos elementos abaixo da diagonal principal e exibe os elementos da diagonal
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                // Elementos da diagonal principal
                printf("Elemento [%d][%d] (Diagonal principal): %d\n", i, j, M[i][j]);
            } else if (i > j) {
                // Elementos abaixo da diagonal principal
                somaAbaixoDiagonal += M[i][j];
            }
        }
    }

    // Exibe a soma dos elementos abaixo da diagonal principal
    printf("Soma dos elementos abaixo da diagonal principal: %d\n", somaAbaixoDiagonal);

    return 0;
}
=======
#include <stdio.h>

int main() {
    int M[4][4];
    int somaAbaixoDiagonal = 0;

    // Preenche a matriz 4x4
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Calcula a soma dos elementos abaixo da diagonal principal e exibe os elementos da diagonal
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                // Elementos da diagonal principal
                printf("Elemento [%d][%d] (Diagonal principal): %d\n", i, j, M[i][j]);
            } else if (i > j) {
                // Elementos abaixo da diagonal principal
                somaAbaixoDiagonal += M[i][j];
            }
        }
    }

    // Exibe a soma dos elementos abaixo da diagonal principal
    printf("Soma dos elementos abaixo da diagonal principal: %d\n", somaAbaixoDiagonal);

    return 0;
}
>>>>>>> 224244c8b77909b22cfb00e2c3412c41c21b1f09
