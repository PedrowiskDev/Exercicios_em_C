#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));

    // Declara um array de 20 inteiros para armazenar números aleatórios
    int numeros[20], nUsuario;

    // Gera e imprime 20 números aleatórios entre 0 e 99
    printf("\nVinte numeros aleatorios entre 0 e 99: ");
    for (int i = 0; i < 20; i++)
    {
        numeros[i] = rand() % 100;   // Gera números aleatórios entre 0 e 99
        printf(" %d\n", numeros[i]); // Imprime o número gerado
    }

    // Solicita ao usuário um valor para pesquisar
    printf("Insira um valor que sera pesquisado: \n");
    scanf("%d", &nUsuario);

    // Procura o valor inserido pelo usuário no array de números aleatórios
    for (int i = 0; i < 20; i++)
    {
        if (nUsuario == numeros[i])
        {
            // Se o valor for encontrado, imprime a posição onde foi encontrado
            printf("O numero esta na lista, na posicao: %d\n", i);
        }
    }

    return 0;
}
