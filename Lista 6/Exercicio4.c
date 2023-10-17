#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vetorA[10], vetorB[10], vetorC[10];  // Declara três arrays de inteiros para armazenar os números

// Função para somar os vetores A e B e armazenar o resultado em C
void somaVetores(int A[], int B[], int C[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        C[i] = A[i] + B[i];  // Soma os elementos correspondentes dos vetores A e B e armazena em C
    }
}

int main()
{
    printf("Digite 10 numeros para o vetor A:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);  // Solicita ao usuário que insira valores para o vetor A
    }

    printf("Digite 10 numeros para o vetor B:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorB[i]);  // Solicita ao usuário que insira valores para o vetor B
    }

    somaVetores(vetorA, vetorB, vetorC, 10);  // Chama a função para somar os vetores A e B, armazenando o resultado em C

    printf("Resultado da soma dos vetores C:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetorC[i]);  // Imprime os resultados no vetor C, que é a soma dos vetores A e B
    }

    return 0;
}
