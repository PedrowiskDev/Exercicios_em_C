#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcular_estatisticas(const char *arquivo_entrada, const char *arquivo_saida)
{
    FILE *entrada, *saida;
    float peso_maximo = 0, peso_minimo = 100000, soma_pesos = 0;
    int contador = 0;
    char linha[300];

    // Abre o arquivo de entrada para leitura
    entrada = fopen(arquivo_entrada, "r");
    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    while (fgets(linha, sizeof(linha), entrada) != NULL)
    {
        char *token = strtok(linha, ";"); // Divide a linha em tokens usando o ponto e vírgula como delimitador
        token = strtok(NULL, ";");
        token = strtok(NULL, ";");
        token = strtok(NULL, ";");

        int peso = atoi(token);

        if (peso > peso_maximo)
        {
           peso_maximo = peso;
        }

        if (peso < peso_minimo)
        {
           peso_minimo = peso;
        }

        soma_pesos += peso;
        
        contador++;
    }

    // Fecha o arquivo de entrada
    fclose(entrada);

    // Abre o arquivo de saída para escrita
    saida = fopen(arquivo_saida, "w");
    if (saida == NULL)
    {
        printf("Erro ao abrir o arquivo de saída.\n");
        exit(1);
    }

    // Calcula a média
    float media_pesos = soma_pesos / contador;

    // Escreve as estatísticas no arquivo de saída
    fprintf(saida, "Peso Máximo: %.2f\n", peso_maximo);
    fprintf(saida, "Peso Mínimo: %.2f\n", peso_minimo);
    fprintf(saida, "Média de Pesos: %.2f\n", media_pesos);

    // Fecha o arquivo de saída
    fclose(saida);
}

int main()
{
    calcular_estatisticas("../arquivo-01.txt", "../saida.txt");

    return 0;
}
