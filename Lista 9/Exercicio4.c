#include <stdlib.h>
#include <stdio.h>

int fatorial(int n)
{
    int resposta;
    if (n == 1)
    {
        resposta = 1;
    }
    else
    {
        resposta = n * fatorial(n - 1);
    }
    return resposta;
}

int main()
{
    int num1;

    printf("digite um valor para a fatorial:\n");
    scanf("%d", &num1);

    printf("O resultado da divisao foi: %d", fatorial(num1));

    return 0;
}
