#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para representar informações dos animais
struct Animal
{
    char nome[50];
    char especie[50];
    char domestico[5]; // Alterado para char para correção
    int peso, idade;
};

// Procedimento para ler o arquivo e imprimir informações dos animais
void lerArquivoAnimais(const char *nomeArquivo)
{
    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    struct Animal animal;

    char palavras[100];

    // Loop para percorrer todas as linhas do arquivo
    while (fgets(palavras, 100, arquivo) != NULL)
    {
        // Utilize sscanf para extrair informações da linha
        sscanf(palavras, "%49[^;];%49[^;];%4s;%d;%d;", animal.nome, animal.especie, animal.domestico, &animal.peso, &animal.idade);

        // Imprimir informações do animal
        printf("Nome: %s\n", animal.nome);
        printf("Especie: %s\n", animal.especie);
        printf("Domestico: %s\n", strcmp(animal.domestico, "true") == 0 ? "Sim" : "Nao");
        printf("Peso maximo: %d\n", animal.peso);
        printf("Idade maxima em cativeiro: %d\n", animal.idade);
        printf("\n");
    }

    fclose(arquivo);
}

int main()
{
    lerArquivoAnimais("../arquivo-01.txt");
    return 0;
}
