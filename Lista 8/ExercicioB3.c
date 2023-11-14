#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para representar um aluno
struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
    float media;
};

int main() {
    // Array para armazenar dados de cinco alunos
    struct Aluno alunos[5];

    // Leitura dos dados dos cinco alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite as notas do aluno %d (nota1 nota2 nota3): ", i + 1);
        scanf("%f %f %f", &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);

        // Calcular a média do aluno
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }

    // Abrir o arquivo binário para escrita
    FILE *arquivoBinario = fopen("../arquivo_exercicioB3.bin", "wb");
    if (arquivoBinario == NULL) {
        perror("Erro ao abrir o arquivo binário");
        return 1;
    }

    // Escrever os dados dos alunos no arquivo binário
    fwrite(alunos, sizeof(struct Aluno), 5, arquivoBinario);

    // Fechar o arquivo binário
    fclose(arquivoBinario);

    printf("Dados dos alunos foram salvos no arquivo binário.\n");

    return 0;
}
