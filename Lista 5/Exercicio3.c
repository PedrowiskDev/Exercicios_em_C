#include <stdio.h>

int main() {
    int inteiro;
    float real;
    char caractere;

    int *ptrInteiro = &inteiro;
    float *ptrReal = &real;
    char *ptrCaractere = &caractere;

    // Endereços e conteúdos iniciais
    printf("Endereço do inteiro: %p\n", ptrInteiro);
    printf("Conteúdo do inteiro: %d\n", inteiro);
    printf("Endereço do real: %p\n", ptrReal);
    printf("Conteúdo do real: %.2f\n", real);
    printf("Endereço do caractere: %p\n", ptrCaractere);
    printf("Conteúdo do caractere: %c\n", caractere);

    // Novos dados
    printf("Digite um novo valor inteiro: ");
    scanf("%d", &inteiro);
    printf("Digite um novo valor real: ");
    scanf("%f", &real);
    printf("Digite um novo caractere: ");
    scanf(" %c", &caractere);

    // Endereços e conteúdos após a alteração
    printf("Endereço do inteiro: %p\n", ptrInteiro);
    printf("Conteúdo do inteiro: %d\n", inteiro);
    printf("Endereço do real: %p\n", ptrReal);
    printf("Conteúdo do real: %.2f\n", real);
    printf("Endereço do caractere: %p\n", ptrCaractere);
    printf("Conteúdo do caractere: %c\n", caractere);

    return 0;
}
