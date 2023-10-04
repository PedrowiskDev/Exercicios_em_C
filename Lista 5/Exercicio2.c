#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void tabela(int a, int b, int c)
{
    printf("| NOME_VARIAVEL |         ENDEREÇO       | VALOR |\n");
    printf("|       a       |     %p   |   %d   |\n", &a, a);
    printf("|       b       |     %p   |   %d   |\n", &b, b);
    printf("|       c       |     %p   |   %d   |\n", &c, c);
}

int main()
{

    int a, b, c;

    printf("Digite s valores de A, B e C:\n");
    scanf("%d %d %d", &a, &b, &c);

    tabela(a, b, c);

    return 0;
}
