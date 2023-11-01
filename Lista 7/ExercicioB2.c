#include <stdio.h>
#include <stdlib.h>

// Função para encontrar o k-ésimo menor elemento em um vetor A de tamanho n.
int k_esimo(int A[], int n, int k) {
    // Verifica se o valor de k é válido.
    if (k <= 0 || k > n) {
        printf("Valor de k inválido.\n");
        exit(1);
    }

    // Ordena o vetor A em ordem crescente (Bubble Sort).
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // O k-ésimo menor elemento será o elemento em A[k-1].
    return A[k - 1];
}

// Função para alocar e inicializar um vetor de tamanho n.
int *alloca(int n) {
    int *V = (int *)malloc(n * sizeof(int));
    if (V == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    return V;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho do vetor inválido.\n");
        return 1;
    }

    int *A = alloca(n); // Aloca memória para o vetor A.

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int k;
    printf("Digite o valor de k (positivo e menor que %d): ", n);
    scanf("%d", &k);

    if (k > 0 && k <= n) {
        int result = k_esimo(A, n, k); // Chama a função k_esimo para encontrar o k-ésimo menor elemento.
        printf("O %d-ésimo menor elemento de A é: %d\n", k, result);
    } else {
        printf("Valor de k inválido.\n");
    }

    free(A); // Libera a memória.

    return 0;
}
