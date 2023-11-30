#include <stdlib.h>
#include <stdio.h>

int contar(int n)
{
    if (n < 10)
    {
        
        return 1;
    }

    else
    {
        return 1 + contar(n / 10);
    }
}

int main()
{

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    int contador = contar(num);

    printf("O numero digitado foi %d e tem %d digitos.", num, contador);
}