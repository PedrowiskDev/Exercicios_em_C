#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    printf("Os enderecos das variaveis sao: \n%p,\n%p .\n", &num1, &num2);

    if (&num1 > &num2)
    {
        printf("O maior endereco e: %p",&num1);
    }
    
    if (&num1 < &num2)
    {
        printf("O maior endereço é: %p",&num2);
    }


    return 0;
}