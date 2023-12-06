#include <stdio.h>
#include "structveiculo.h" // Incluindo o arquivo de cabeçalho veiculo.h

int main() {
    struct Veiculo palio, toro;
    
    palio.preco = 20000.00;
    toro.preco = 20000.00;

    printf("Carro Palio - Preco: R$ %.2f\n", palio.preco);

    printf("Carro Palio - Preco: R$ %.2f\n", toro.preco);

    return 0;
}