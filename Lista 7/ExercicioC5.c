<<<<<<< HEAD
#include <stdio.h>

int main() {
    int matriz[10][10];

    // Preenche a matriz com elementos calculados pelas três equações especificadas.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j - 2; // A[i][j] = 2i + 7j - 2 se i < j.
            } else if (i == j) {
                matriz[i][j] = 3 * i * i - 1; // A[i][j] = 3i^2 - 1 se i = j.
            } else {
                matriz[i][j] = 4 * i * i * i - 5 * j * j + 1; // A[i][j] = 4i^3 - 5j^2 + 1 se i > j.
            }
        }
    }

    // Imprime a matriz gerada.
    printf("Matriz 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int matriz[10][10];

    // Preenche a matriz com elementos calculados pelas três equações especificadas.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j - 2; // A[i][j] = 2i + 7j - 2 se i < j.
            } else if (i == j) {
                matriz[i][j] = 3 * i * i - 1; // A[i][j] = 3i^2 - 1 se i = j.
            } else {
                matriz[i][j] = 4 * i * i * i - 5 * j * j + 1; // A[i][j] = 4i^3 - 5j^2 + 1 se i > j.
            }
        }
    }

    // Imprime a matriz gerada.
    printf("Matriz 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
>>>>>>> 224244c8b77909b22cfb00e2c3412c41c21b1f09
