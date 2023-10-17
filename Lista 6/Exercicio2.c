#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));

    int numeros[100];

    printf("Cem numeros aleatorios entre 0 e 99:\n");
    
    for (int i = 0; i < 100; i++) {
        do {
            // Gera um número aleatório entre 0 e 99
            numeros[i] = rand() % 100;
        } while (numeros[i] % 6 == 0 || numeros[i] % 10 == 6);
        // O loop do-while garante que o número gerado não seja múltiplo de 6 e não termine com o dígito 6.

        printf("%d\n", numeros[i]); // Imprime o número gerado
    }

    return 0;
}
