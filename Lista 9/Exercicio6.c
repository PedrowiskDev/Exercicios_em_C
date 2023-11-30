#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ocorrencia(char palavra[], char caractere, int fim)
{
    if (palavra[fim] == '\0') {
        return 0;
    } else
    {
        return (palavra[fim] == caractere) + ocorrencia(palavra, caractere, fim + 1);
    }

}

int main()
{
    char palavra[15], caractere;

    printf("digite uma palavra:\n");
    scanf("%s", palavra);

    printf("Digite um caractere para ser procurado na palavra:\n");
    scanf(" %c", &caractere);

    printf("O resultado foi: %d", ocorrencia(palavra, caractere, 0));

    return 0;
}
