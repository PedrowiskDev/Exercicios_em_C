#include <stdlib.h>
#include <stdio.h>

int divisao(int numerador, int denominador)
{
    if (numerador < denominador)
    {
        return 0;
    }
    else
    {
        return 1 + divisao(numerador - denominador, denominador);
    }
}

int main()
{
    int num1, num2;

    printf("digite os valores que deseja dividir:\n");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0)
    {
        printf("Erro, divisao por zero.\n");
    }
    else
    {
        int resultado = divisao(num1, num2);
    }

    printf("O resultado da divisao foi: %d", divisao(num1, num2));

    return 0;
}