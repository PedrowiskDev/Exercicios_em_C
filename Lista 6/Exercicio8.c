#include <stdio.h>
#include <string.h>

int main() {
    char verbo[100];
    char radical[100];

    printf("Digite um verbo regular terminado em 'ar': ");
    scanf("%s", verbo);

    // Verifica se o verbo termina em "AR".
    if (strcmp(verbo + strlen(verbo) - 2, "ar") == 0) {
        // Calcula o radical (removendo os dois últimos caracteres "AR").
        strncpy(radical, verbo, strlen(verbo) - 2);
        radical[strlen(verbo) - 2] = '\0';

        printf("Radical: %s\n", radical);

        // Conjugação nos tempos verbais especificados.
        printf("Presente do indicativo:\n");
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele/Ela %sa\n", radical);
        printf("Nós %samos\n", radical);
        printf("Vós %sais\n", radical);
        printf("Eles/Elas %sam\n", radical);

        printf("Pretérito perfeito do indicativo:\n");
        printf("Eu %sei\n", radical);
        printf("Tu %seste\n", radical);
        printf("Ele/Ela %seu\n", radical);
        printf("Nós %semos\n", radical);
        printf("Vós %sestes\n", radical);
        printf("Eles/Elas %seram\n", radical);

        printf("Futuro de presente do indicativo:\n");
        printf("Eu %sarei\n", radical);
        printf("Tu %sarás\n", radical);
        printf("Ele/Ela %sará\n", radical);
        printf("Nós %saremos\n", radical);
        printf("Vós %sareis\n", radical);
        printf("Eles/Elas %são\n", radical);
    } else {
        printf("O verbo nao termina em 'ar'.\n");
    }

    return 0;
}
