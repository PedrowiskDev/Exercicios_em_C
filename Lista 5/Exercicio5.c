#include <stdio.h>

int main() {
    char caractere = 'A';
    int inteiro = 42;
    float flutuante = 3.14;
    double dobro = 3.141;
    int *ip = &inteiro;
    char *cp = &caractere;
    int *ip2 = ip;
    float *fp = &flutuante;
    double *dp = &dobro;

    printf("O Endereco do char c %c e 0x%p. Esta variavel ocupa %d bytes.\n", caractere, &caractere, sizeof(caractere));
    printf("O Endereco do int i %d e 0x%p. Esta variavel ocupa %d bytes.\n", inteiro, &inteiro, sizeof(inteiro));
    printf("O Endereco do float f %f e 0x%p. Esta variavel ocupa %d bytes.\n", flutuante, &flutuante, sizeof(flutuante));
    printf("O Endereco do double d %.0lf e 0x%p. Esta variavel ocupa %d bytes.\n", dobro, &dobro, sizeof(dobro));
    printf("O Endereco do int *ip e 0x%p. Esta variavel ocupa %d bytes.\n", &ip, sizeof(ip));
    printf("O Endereco do char *cp e 0x%p. Esta variavel ocupa %d bytes.\n", &cp, sizeof(cp));
    printf("O Endereco do int *ip2 e 0x%p. Esta variavel ocupa %d bytes.\n", &ip2, sizeof(ip2));
    printf("O Endereco do float *fp e 0x%p. Esta variavel ocupa %d bytes.\n", &fp, sizeof(fp));
    printf("O Endereco do double *dp e 0x%p. Esta variavel ocupa %d bytes.\n", &dp, sizeof(dp));

    return 0;
}
