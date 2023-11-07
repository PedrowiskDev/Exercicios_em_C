#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("../arquivo-01.txt", "r+");
    char palavras[100];
    int contador = 0;

    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Arquivo encontrado! \n");

        for (int i = 0; i < 10; i++)
        {
            if (fgets(palavras, 100, arquivo) != NULL)
            {
                contador++;
            }
        }

        fclose(arquivo);
    }

    printf("A quantidade de linhas é: %d\n", contador);

    return 0;
}
