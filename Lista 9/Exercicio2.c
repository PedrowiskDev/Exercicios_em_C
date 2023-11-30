#include <stdlib.h>
#include <stdio.h>

int soma(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return soma(num1 + 1, num2 - 1);
    }
}

int main()
{
    int num1, num2;

    printf("digite os valores que deseja somar:\n");
    scanf("%d %d", &num1, &num2);

    printf("O resultado da soma foi: %d", soma(num1, num2));

    return 0;
}