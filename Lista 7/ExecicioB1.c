#include <stdio.h>
#include <stdlib.h>

void combinar(int A[], int B[], int C[], int n) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (A[i] < B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        C[k] = A[i];
        i++;
        k++;
    }

    while (j < n) {
        C[k] = B[j];
        j++;
        k++;
    }
}

int *alloca(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    return arr;
}

int main() {
    int n = 4;
    int *A = alloca(n);
    int *B = alloca(n);
    int *C = alloca(2 * n);

    // Preenche os vetores A e B com números ordenados
    A[0] = 5; A[1] = 8; A[2] = 12; A[3] = 16;
    B[0] = 3; B[1] = 7; B[2] = 14; B[3] = 15;

    // Chame a função combinar para combinar os vetores A e B em C
    combinar(A, B, C, n * 2);

    // Imprima o vetor C
    printf("C = {");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d", C[i]);
        if (i < 2 * n - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    // Libere a memória alocada
    free(A);
    free(B);
    free(C);

    return 0;
}
