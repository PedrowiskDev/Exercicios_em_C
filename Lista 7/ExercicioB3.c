#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um vetor de inteiros aleatórios de tamanho especificado.
int *randomizaArray(int size) {
    int *V = (int *)malloc(size * sizeof(int)); // Aloca memória para o vetor.
    if (V == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        V[i] = rand() % 11; // Gera números aleatórios de 0 a 10.
    }

    return V;
}

// Função para verificar se um valor já existe em um vetor.
int duplicado(int *V, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (V[i] == value) {
            return 1; // O valor já existe no vetor.
        }
    }
    return 0; // O valor não existe no vetor.
}

// Função para criar o vetor C, a união de A e B, sem valores repetidos.
int *mergeArrays(int *A, int sizeA, int *B, int sizeB, int *sizeC) {
    int *C = NULL;
    *sizeC = 0;

    for (int i = 0; i < sizeA; i++) {
        if (!duplicado(C, *sizeC, A[i])) {
            C = (int *)realloc(C, (*sizeC + 1) * sizeof(int));
            C[*sizeC] = A[i];
            (*sizeC)++;
        }
    }

    for (int i = 0; i < sizeB; i++) {
        if (!duplicado(C, *sizeC, B[i])) {
            C = (int *)realloc(C, (*sizeC + 1) * sizeof(int));
            C[*sizeC] = B[i];
            (*sizeC)++;
        }
    }

    return C;
}

// Função para imprimir um vetor.
void printArray(int *V, int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", V[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int main() {
    // Inicializa o gerador de números aleatórios com uma semente baseada no tempo.
    srand(time(NULL));

    int sizeA = 5;
    int sizeB = 5;
    int sizeC;

    int *A = randomizaArray(sizeA); 
    int *B = randomizaArray(sizeB); 
    int *C = mergeArrays(A, sizeA, B, sizeB, &sizeC); 

    printf("Vetor A: ");
    printArray(A, sizeA);

    printf("Vetor B: ");
    printArray(B, sizeB);

    printf("Vetor C (união de A e B, sem duplicatas): ");
    printArray(C, sizeC);

    free(A); // Libera a memória alocada para A.
    free(B); // Libera a memória alocada para B.
    free(C); // Libera a memória alocada para C.

    return 0;
}
