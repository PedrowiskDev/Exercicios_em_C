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
    struct Aluno alunos[3];

    // Leitura dos dados dos cinco alunos
    for (int i = 0; i < 3; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite as notas do aluno %d (nota1 nota2 nota3): ", i + 1);
        scanf("%f %f %f", &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);

        // Calcular a média do aluno
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }

    // Encontrar o aluno com a maior média geral
    int indiceMaiorMedia = 0;

    for (int i = 1; i < 3; i++) {
        if (alunos[i].media > alunos[indiceMaiorMedia].media) {
            indiceMaiorMedia = i;
        }
    }

    // Exibir os resultados
    printf("\nAluno com a maior media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorMedia].matricula);
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Notas: %.2f %.2f %.2f\n", alunos[indiceMaiorMedia].nota1, alunos[indiceMaiorMedia].nota2, alunos[indiceMaiorMedia].nota3);
    printf("Media: %.2f\n", alunos[indiceMaiorMedia].media);

    return 0;
}
