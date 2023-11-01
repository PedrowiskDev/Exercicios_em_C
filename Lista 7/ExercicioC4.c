#include <stdio.h>

// Função para preencher uma matriz de 4x6.
void preencherMatriz(int matriz[4][6]) {
    printf("Digite os elementos da matriz 4x6:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para somar duas matrizes e armazenar o resultado em uma terceira matriz.
void somaMatrizes(int A[4][6], int B[4][6], int S[4][6]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            S[i][j] = A[i][j] + B[i][j]; // Soma dos elementos de A e B.
        }
    }
}

// Função para subtrair duas matrizes e armazenar o resultado em uma terceira matriz.
void diferencaMatrizes(int A[4][6], int B[4][6], int D[4][6]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            D[i][j] = A[i][j] - B[i][j]; // Diferença dos elementos de A e B.
        }
    }
}

// Função para imprimir uma matriz.
void imprimirMatriz(int matriz[4][6]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[4][6];
    int B[4][6];
    int S[4][6];
    int D[4][6];

    printf("Preencha a matriz A:\n");
    preencherMatriz(A);

    printf("Preencha a matriz B:\n");
    preencherMatriz(B);

    somaMatrizes(A, B, S);
    diferencaMatrizes(A, B, D);

    printf("Matriz A:\n");
    imprimirMatriz(A);

    printf("Matriz B:\n");
    imprimirMatriz(B);

    printf("Matriz S (Soma de A e B):\n");
    imprimirMatriz(S);

    printf("Matriz D (Diferença de A e B):\n");
    imprimirMatriz(D);

    return 0;
}
