#include <stdio.h>
#include <string.h>

#define MAX_REGISTROS 15

struct Eletrodomestico
{
    char nomeLoja[50];
    char telefone[20];
    double preco;
};

void calcularEstatisticas(struct Eletrodomestico registros[], int numRegistros)
{
    double menorPreco = 999999999.0;
    double somaPrecos = 0;
    double maiorPreco = 0.0;

    // Encontra o menor, maior e soma dos preços
    for (int i = 0; i < numRegistros; i++)
    {
        if (registros[i].preco < menorPreco)
        {
            menorPreco = registros[i].preco;
        }
        if (registros[i].preco > maiorPreco)
        {
            maiorPreco = registros[i].preco;
        }
        somaPrecos += registros[i].preco;
    }

    // Calcula o preço médio
    double precoMedio = somaPrecos / numRegistros;

    // Exibe as estatísticas
    printf("Melhor preco: %.2f\n", menorPreco);
    printf("Preco medio: %.2f\n", precoMedio);
    printf("Preco maximo: %.2f\n", maiorPreco);
}

int main()
{
    struct Eletrodomestico registros[MAX_REGISTROS];
    int numRegistros = 0;

    printf("Cadastro de Eletrodomesticos\n");
    printf("Digite os dados para cadastrar os eletrodomesticos:\n");

    // Solicitação dos dados para cadastrar os eletrodomésticos
    for (int i = 0; i < MAX_REGISTROS; i++)
    {
        printf("\nEletrodomestico %d:\n", i + 1);
        printf("Nome da Loja: ");
        scanf("%s", registros[i].nomeLoja);

        printf("Telefone: ");
        scanf("%s", registros[i].telefone);

        printf("Preco: ");
        scanf("%lf", &registros[i].preco);
        numRegistros++;

        // Verifica se atingiu o limite máximo de registros
        if (numRegistros == MAX_REGISTROS)
        {
            printf("Limite maximo de registros atingido.\n");
            break;
        }

        char continuar;
        printf("Deseja cadastrar outro eletrodomestico? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S')
        {
            break;
        }
    }

    // Calcula e exibe estatísticas
    calcularEstatisticas(registros, numRegistros);

    return 0;
}
