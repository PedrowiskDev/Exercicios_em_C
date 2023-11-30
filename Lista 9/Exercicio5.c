#include <stdlib.h>
#include <stdio.h>

int serieL(int n)
{

    if (n == 0)
    {
        return 2;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return serieL(n - 1) + serieL(n - 2);
    }
}

int main()
{
    int num1;

    printf("digite um valor inteiro:\n");
    scanf("%d", &num1);

    printf("O resultado da serie de Lucas foi: %d", serieL(num1));

    return 0;
}
