<<<<<<< HEAD
#include <stdio.h>

void preencherMatriz(int M[5][5]) {
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }
}

int somaLinha4(int M[5][5]) {
    int soma = 0;
    for (int j = 0; j < 5; j++) {
        soma += M[3][j]; // Linha 4 (índice 3) fixa, coluna varia (0 a 4).
    }
    return soma;
}

int somaColuna2(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][1]; // Coluna 2 (índice 1) fixa, linha varia (0 a 4).
    }
    return soma;
}

int somaDiagonalPrincipal(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][i]; // Elementos da diagonal principal.
    }
    return soma;
}

int somaDiagonalSecundaria(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][4 - i]; // Elementos da diagonal secundária (5 - 1 - i).
    }
    return soma;
}

int somaTodosElementos(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma += M[i][j]; // Todos os elementos da matriz.
        }
    }
    return soma;
}

int main() {
    int matriz[5][5];

    preencherMatriz(matriz);

    int somaLinha4Result = somaLinha4(matriz);
    int somaColuna2Result = somaColuna2(matriz);
    int somaDiagonalPrincipalResult = somaDiagonalPrincipal(matriz);
    int somaDiagonalSecundariaResult = somaDiagonalSecundaria(matriz);
    int somaTodosElementosResult = somaTodosElementos(matriz);

    printf("Soma da Linha 4: %d\n", somaLinha4Result);
    printf("Soma da Coluna 2: %d\n", somaColuna2Result);
    printf("Soma da Diagonal Principal: %d\n", somaDiagonalPrincipalResult);
    printf("Soma da Diagonal Secundária: %d\n", somaDiagonalSecundariaResult);
    printf("Soma de Todos os Elementos da Matriz: %d\n", somaTodosElementosResult);

    return 0;
}
=======
#include <stdio.h>

void preencherMatriz(int M[5][5]) {
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }
}

int somaLinha4(int M[5][5]) {
    int soma = 0;
    for (int j = 0; j < 5; j++) {
        soma += M[3][j]; // Linha 4 (índice 3) fixa, coluna varia (0 a 4).
    }
    return soma;
}

int somaColuna2(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][1]; // Coluna 2 (índice 1) fixa, linha varia (0 a 4).
    }
    return soma;
}

int somaDiagonalPrincipal(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][i]; // Elementos da diagonal principal.
    }
    return soma;
}

int somaDiagonalSecundaria(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][4 - i]; // Elementos da diagonal secundária (5 - 1 - i).
    }
    return soma;
}

int somaTodosElementos(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma += M[i][j]; // Todos os elementos da matriz.
        }
    }
    return soma;
}

int main() {
    int matriz[5][5];

    preencherMatriz(matriz);

    int somaLinha4Result = somaLinha4(matriz);
    int somaColuna2Result = somaColuna2(matriz);
    int somaDiagonalPrincipalResult = somaDiagonalPrincipal(matriz);
    int somaDiagonalSecundariaResult = somaDiagonalSecundaria(matriz);
    int somaTodosElementosResult = somaTodosElementos(matriz);

    printf("Soma da Linha 4: %d\n", somaLinha4Result);
    printf("Soma da Coluna 2: %d\n", somaColuna2Result);
    printf("Soma da Diagonal Principal: %d\n", somaDiagonalPrincipalResult);
    printf("Soma da Diagonal Secundária: %d\n", somaDiagonalSecundariaResult);
    printf("Soma de Todos os Elementos da Matriz: %d\n", somaTodosElementosResult);

    return 0;
}
>>>>>>> 224244c8b77909b22cfb00e2c3412c41c21b1f09
