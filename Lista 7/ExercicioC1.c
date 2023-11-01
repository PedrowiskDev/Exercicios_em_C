#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um número em ponto flutuante aleatório entre 0 e 1.
float numeroFloatAleatorio() {
    return (float)rand() / RAND_MAX;
}

int main() {
    int n;

    // Solicita o valor de n ao usuário.
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor de n deve ser positivo.\n");
        return 1;
    }

    // Inicializa o gerador de números aleatórios com uma semente baseada no tempo.
    srand(time(NULL));

    // Aloca memória para a matriz de números em ponto flutuante n x n.
    float **M = (float **)malloc(n * sizeof(float *));
    if (M == NULL) {
        printf("Erro na alocação de memória para a matriz.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        M[i] = (float *)malloc(n * sizeof(float));
        if (M[i] == NULL) {
            printf("Erro na alocação de memória para a matriz.\n");
            return 1;
        }
    }

    // Preenche a matriz com valores aleatórios entre 0 e 1.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = numeroFloatAleatorio();
        }
    }

    // Imprime os elementos da matriz.
    printf("Matriz %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", M[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada para a matriz.
    for (int i = 0; i < n; i++) {
        free(M[i]);
    }
    free(M);

    return 0;
}
