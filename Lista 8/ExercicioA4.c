#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo = fopen("../arquivo-01.txt", "r+");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Arquivo encontrado! \n");

        char linha[300]; // Cria um array para armazenar uma linha do arquivo

        // Lê as linhas do arquivo
        while (fgets(linha, sizeof(linha), arquivo) != NULL)
        {
            char *token = strtok(linha, ";"); // Divide a linha em tokens usando o ponto e vírgula como delimitador
            token = strtok(NULL, ";");
            token = strtok(NULL, ";");
            token = strtok(NULL, ";");
            token = strtok(NULL, ";");

            int idade = atoi(token);

            if (idade >= 10 && idade <= 16)
            {
                token = strtok(linha, ";"); // Volta para o início da linha
                printf("Nome cientifico: %s\n", token);
            }
        }

        fclose(arquivo);
    }

    return 0;
}
