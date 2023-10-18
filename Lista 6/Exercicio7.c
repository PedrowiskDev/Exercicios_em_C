#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[10];
    int contadorVogais = 0, contadorConsoantes = 0;

    printf("Digite um texto: ");
    scanf("%s", str);

    for (int i = 0; i < 10; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
        {
            contadorConsoantes++;
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                contadorVogais++;
                contadorConsoantes--;
            }
        }
    }

    printf("Numero de vogais: %d\n", contadorVogais);
    printf("Numero de consoantes: %d\n", contadorConsoantes);
}