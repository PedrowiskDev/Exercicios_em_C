#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idade_dentro_intervalo(int idade, int limite_inferior, int limite_superior)
{
    return (idade >= limite_inferior && idade <= limite_superior);
}

int main()
{
    FILE *felinos = fopen("../arquivo-01.txt", "r");
    FILE *intervalos = fopen("../arquivo-02.txt", "r");

    if (felinos == NULL || intervalos == NULL)
    {
        printf("Erro ao abrir os arquivos!");
        exit(EXIT_FAILURE);
    }

    char linha_felino[300];
    char linha_intervalo[50];
    int limite_inferior, limite_superior;

    // Lê o intervalo a ser verificado
    while (fgets(linha_intervalo, sizeof(linha_intervalo), intervalos) != NULL)
    {
        // Converte as strings do intervalo para inteiros usando atoi
        char *token = strtok(linha_intervalo, ";");
        limite_inferior = atoi(token);

        token = strtok(NULL, ";");
        limite_superior = atoi(token);

        // Para cada intervalo, verifica os felinos
        printf("Felinos para o intervalo %d - %d:\n", limite_inferior, limite_superior);

        // Lê os felinos do arquivo e verifica se estão dentro do intervalo
        fseek(felinos, 0, SEEK_SET); // Volta para o início do arquivo de felinos
        while (fgets(linha_felino, sizeof(linha_felino), felinos) != NULL)
        {
            // Converte a idade do felino para inteiro usando atoi
            char *nome = strtok(linha_felino, ";");
            strtok(NULL, ";"); // Descarta a informação do nome científico
            strtok(NULL, ";"); // Descarta a informação sobre ser doméstico ou selvagem

            char *idade_str = strtok(NULL, ";");

            // Convertendo a idade para inteiro usando atoi
            int idade = atoi(idade_str);

            if (idade_dentro_intervalo(idade, limite_inferior, limite_superior))
            {
                printf("  Nome: %s\n", nome);
            }
        }
    }

    fclose(felinos);
    fclose(intervalos);

    return 0;
}
