#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivoTexto, *arquivoBinario;

    // Abre o arquivo de texto para leitura
    arquivoTexto = fopen("../arquivo-02.txt", "rb");
    if (arquivoTexto == NULL)
    {
        printf("Erro ao abrir arquivo de texto para leitura.\n");
        exit(EXIT_FAILURE);
    }

    // Abre o arquivo binário para escrita
    arquivoBinario = fopen("../arquivo-02.bin", "wb");
    if (arquivoBinario == NULL)
    {
        printf("Erro ao abrir arquivo binário para escrita.\n");
        fclose(arquivoTexto);
        exit(EXIT_FAILURE);
    }

    // Lê e escreve dados binários até o final do arquivo de texto
    char buffer[1024];
    int bytesLidos;

    while ((bytesLidos = fread(buffer, 1, sizeof(buffer), arquivoTexto)) > 0)
    {
        fwrite(buffer, 1, bytesLidos, arquivoBinario);
    }

    // Fecha os arquivos
    fclose(arquivoTexto);
    fclose(arquivoBinario);

    printf("Copia binaria concluida com sucesso.\n");

    return 0;
}
