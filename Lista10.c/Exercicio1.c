#include <stdio.h>
#include <string.h>

// Estrutura Cliente
struct Cliente {
    char nome[50];
    char dataNascimento[20];
    char endereco[100];
    char telefone[20];
};

int main() {

    struct Cliente clientes[50];
    int numClientes = 0; // Variável para ter o número atual de clientes cadastrados
    char continuar;

    do {
        // Solicitação das informações do cliente
        printf("Cadastro de Cliente\n");
        printf("Nome: ");
        scanf("%s", clientes[numClientes].nome);

        printf("Data de Nascimento: ");
        scanf("%s", clientes[numClientes].dataNascimento);

        printf("Endereco: ");
        scanf("%s", clientes[numClientes].endereco);

        printf("Telefone: ");
        scanf("%s", clientes[numClientes].telefone);

        numClientes++; // Incrementa o número de clientes após cada cadastro

        // Pergunta ao usuário se deseja cadastrar outro cliente
        printf("\nDeseja cadastrar outro cliente? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S'); // Continua cadastrando enquanto a resposta for 's' ou 'S'

    // Exibição dos clientes cadastrados
    printf("\nClientes cadastrados:\n");
    for (int i = 0; i < numClientes; i++) {
        printf("\nCliente %d\n", i + 1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Data de Nascimento: %s\n", clientes[i].dataNascimento);
        printf("Endereco: %s\n", clientes[i].endereco);
        printf("Telefone: %s\n", clientes[i].telefone);
    }

    return 0;
}
