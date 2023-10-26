#include <stdio.h>

void valorVerdade(int A, int B, int C, int *resultado) {

    *resultado = !(A || (!B && C));

}

int main() {
    int A = 1, B = 0, C = 1, resultado;

    valorVerdade(A, B, C, &resultado);

    printf("O resultado foi:\n%d", resultado);
}