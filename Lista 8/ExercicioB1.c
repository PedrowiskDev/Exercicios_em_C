#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para armazenar dados de uma pessoa
struct Pessoa
{
    char nome[50];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
};

int main()
{
    // Array para armazenar dados de duas pessoas
    struct Pessoa pessoas[2];

    // Leitura dos dados das duas pessoas
    for (int i = 0; i < 2; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a data de nascimento da pessoa %d (dd/mm/aaaa): ", i + 1);
        scanf("%d/%d/%d", &pessoas[i].diaNascimento, &pessoas[i].mesNascimento, &pessoas[i].anoNascimento);
    }

    // Inicializar idades mais nova e mais velha com valores iniciais
    int idadeMaisNova = 150, idadeMaisVelha = 0;

    // Índices das pessoas mais nova e mais velha
    int indiceMaisNova, indiceMaisVelha;

    // Calcular as idades e encontrar a pessoa mais nova e mais velha
    for (int i = 0; i < 2; i++)
    {
        // Calcular idade
        int idade = 2023 - pessoas[i].anoNascimento; // Supondo que estamos em 2023

        // Atualizar a pessoa mais nova
        if (idade < idadeMaisNova)
        {
            idadeMaisNova = idade;
            indiceMaisNova = i;
        }

        // Atualizar a pessoa mais velha
        if (idade > idadeMaisVelha)
        {
            idadeMaisVelha = idade;
            indiceMaisVelha = i;
        }
    }

    // Exibir os resultados
    printf("\nPessoa mais nova:\n");
    printf("Nome: %s\n", pessoas[indiceMaisNova].nome);
    printf("Data de Nascimento: %02d/%02d/%04d\n", pessoas[indiceMaisNova].diaNascimento, pessoas[indiceMaisNova].mesNascimento, pessoas[indiceMaisNova].anoNascimento);
    printf("Idade: %d anos\n", idadeMaisNova);

    printf("\nPessoa mais velha:\n");
    printf("Nome: %s\n", pessoas[indiceMaisVelha].nome);
    printf("Data de Nascimento: %02d/%02d/%04d\n", pessoas[indiceMaisVelha].diaNascimento, pessoas[indiceMaisVelha].mesNascimento, pessoas[indiceMaisVelha].anoNascimento);
    printf("Idade: %d anos\n", idadeMaisVelha);

    return 0;
}
