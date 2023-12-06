#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100

// Definição da estrutura Pessoa para representar informações de cada funcionário
struct Pessoa
{
    char nome[50];
    int diaAniversario;
    int mesAniversario;
};

// Estrutura GerenciadorAniversarios para gerenciar funcionários e suas informações
struct GerenciadorAniversarios
{
    struct Pessoa funcionarios[MAX_FUNCIONARIOS];
    int numFuncionarios;
};

// Função para cadastrar um novo funcionário
void cadastrarFuncionario(struct GerenciadorAniversarios *gerenciador, char nome[], int dia, int mes)
{
    if (gerenciador->numFuncionarios < MAX_FUNCIONARIOS)
    {
        strcpy(gerenciador->funcionarios[gerenciador->numFuncionarios].nome, nome);
        gerenciador->funcionarios[gerenciador->numFuncionarios].diaAniversario = dia;
        gerenciador->funcionarios[gerenciador->numFuncionarios].mesAniversario = mes;
        gerenciador->numFuncionarios++;
        printf("Funcionario cadastrado com sucesso.\n");
    }
    else
    {
        printf("Limite maximo de funcionarios atingido.\n");
    }
}

// Função para imprimir os aniversariantes de um determinado mês
void imprimirAniversariantesPorMes(struct GerenciadorAniversarios *gerenciador, int mes)
{
    printf("Aniversariantes do mes %d:\n", mes);
    for (int i = 0; i < gerenciador->numFuncionarios; i++)
    {
        if (gerenciador->funcionarios[i].mesAniversario == mes)
        {
            printf("Nome: %s, Dia: %d\n", gerenciador->funcionarios[i].nome,
                   gerenciador->funcionarios[i].diaAniversario);
        }
    }
}

int main()
{
    struct GerenciadorAniversarios gerenciador;
    gerenciador.numFuncionarios = 0;

    int dia, mes;
    char nome[50];
    char continuar;

    // Cadastro dos funcionários pelo usuário
    do
    {
        printf("Digite o nome do funcionario: ");
        scanf("%s", nome);

        printf("Digite o dia do aniversario: ");
        scanf("%d", &dia);

        printf("Digite o mes do aniversario: ");
        scanf("%d", &mes);

        cadastrarFuncionario(&gerenciador, nome, dia, mes);

        printf("\nDeseja cadastrar outro funcionario? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    int mesConsulta;
    printf("\nDigite o mes para consultar os aniversariantes: ");
    scanf("%d", &mesConsulta);

    // Consulta e impressão dos aniversariantes do mês especificado
    imprimirAniversariantesPorMes(&gerenciador, mesConsulta);

    return 0;
}
