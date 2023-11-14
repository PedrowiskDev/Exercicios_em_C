#include <stdio.h>
#include <stdlib.h>

void imprime_saida(const char *arquivo_saida, const char *conteudo)
{
    FILE *saida;

    saida = fopen(arquivo_saida, "a"); // Use "w" se quiser recriar o arquivo a cada execução
    if (saida == NULL)
    {
        printf("Erro ao abrir o arquivo de saída.\n");
        exit(1);
    }

    // Escrevendo o conteúdo no arquivo de saída
    fprintf(saida, "%s\n", conteudo);

    fclose(saida);
}

int main()
{
    FILE *arquivo = fopen("../arquivo-01.txt", "r");
    char palavras[100];

    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Arquivo encontrado! \n");

        for (int i = 0; i < 10; i++)
        {
            if (fgets(palavras, 100, arquivo) != NULL)
            {
                imprime_saida("../arquivo- 01_copia.txt", palavras);
            }
        }

        fclose(arquivo);
    }

    return 0;
}
