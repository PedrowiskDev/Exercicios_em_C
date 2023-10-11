#include <stdio.h>

int main()
{
    float n1, n2, n3;

    int *ptrInteiro = &inteiro;

    printf("Digite três valores inteiros /n");
    scanf("%f %f %f", &n1, &n2, &n3);

    procedimento(n1, n2, n3);
}

float procedimento(float n1, float n2, float n3)
{
    float maior = 0, menor;

    if (n1 > maior)
    {
        maior = n1;
    }

    if (n2 > maior)
    {
        maior = n1;
    }

    if (n3 > maior)
    {
        maior = n1;
    }

    menor = maior;

    if (n1 < menor)
    {
        menor = n1;
    }

    if (n2 > menor)
    {
        menor = n1;
    }

    if (n3 < menor)
    {
        menor = n1;
    }
    int *ptrmaior = &maior;
    int *ptrmenor = &menor;
    

    return
}