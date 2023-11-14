#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo = fopen("../arquivo-01.txt", "r+"); // Abre o arquivo "arquivo-01.txt" em modo leitura e escrita

    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Arquivo encontrado! \n");

        char linha[256]; // Cria um array para armazenar uma linha do arquivo

        while (fgets(linha, sizeof(linha), arquivo) != NULL)
        {
            char *token = strtok(linha, ";"); // Divide a linha em tokens usando o ponto e vírgula como delimitador
            // O segundo token (índice 1) contém o nome científico
            token = strtok(NULL, ";");

            if (token != NULL)
            {
                printf("%s\n", token); // Imprime o nome científico encontrado
            }
        }

        fclose(arquivo);
    }

    return 0;
}
