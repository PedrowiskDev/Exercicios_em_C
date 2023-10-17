#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declara um array de 5 inteiros para armazenar números aleatórios
int numeros[5];

void gerarNumerosAleatorios()
{
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));

    // Gera e imprime 5 números aleatórios entre 0 e 99
    printf("Cinco numeros aleatorios entre 0 e 99:\n");
    for (int i = 0; i < 5; i++)
    {
        numeros[i] = rand() % 100;  // Gera números aleatórios entre 0 e 99
        printf("%d\n", numeros[i]); // Imprime o número gerado
    }
}

int encontrarMenorNumero()
{
    // Inicializa a variável 'menor' com o primeiro elemento do array
    int menor = numeros[0];

    // Encontra o menor número no array
    for (int i = 1; i < 5; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    // Substitui o primeiro elemento do array pelo menor número
    numeros[0] = menor;

    return menor;
}

void imprimirVetorFinal()
{
    // Imprime os elementos do array
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numeros[i]);
    }
}

int main()
{
    gerarNumerosAleatorios();

    int menor = encontrarMenorNumero();

    printf("O menor numero e: %d\n", menor);

    imprimirVetorFinal();

    return 0;
}
