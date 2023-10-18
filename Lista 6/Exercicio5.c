#include <stdio.h>
#include <stdlib.h>

// Função para preencher um vetor com números digitados pelo usuário
void preencheValores(int vetor[], int length)
{
    printf("Digite %d numeros:\n", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

// Função para copiar números negativos de um vetor para outro
void copiaNegativos(int vetor[], int length, int vetorNeg[])
{
    int contadorNegativos = 0;

    for (int i = 0; i < length; i++)
    {
        if (vetor[i] < 0)
        {
            vetorNeg[contadorNegativos] = vetor[i];
            contadorNegativos++;
        }
    }

    // Preencha o restante do vetorNeg com zeros, se necessário
    for (int i = contadorNegativos; i < length; i++)
    {
        vetorNeg[i] = 0;
    }
}

int main()
{
    int vetorX[10];   // Vetor com números digitados pelo usuário
    int vetorNeg[10]; // Vetor que conterá os números negativos

    preencheValores(vetorX, 10);          // Chama a função para preencher vetorX com 10 números
    copiaNegativos(vetorX, 10, vetorNeg); // Chama a função para copiar os números negativos para vetorNeg

    printf("Numeros negativos:\n");
    for (int i = 0; i < 10; i++)
    {
        if (vetorNeg[i] != 0)
        {
            printf("%d\n", vetorNeg[i]); // Imprime os números negativos presentes em vetorNeg
        }
    }

    return 0;
}
