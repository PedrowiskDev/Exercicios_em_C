#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100]; // Declara uma matriz de caracteres para armazenar a entrada do usuário com espaço para 100 caracteres.
    int contadorVogais = 0, contadorConsoantes = 0; // Inicializa as variáveis de contagem de vogais e consoantes com zero.

    printf("Digite um texto: "); // Solicita ao usuário que insira um texto.

    scanf("%99[^\n]", str); // Lê uma linha de texto (até 99 caracteres) e armazena em 'str' até encontrar uma quebra de linha.

    for (int i = 0; str[i] != '\0'; i++)
    {
        // Percorre a linha de texto até o final (caractere nulo '\0' indica o fim da string).
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            // Verifica se o caractere atual é uma letra (maiúscula ou minúscula).
            contadorConsoantes++; // Incrementa o contador de consoantes.
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                // Verifica se o caractere atual é uma vogal.
                contadorVogais++; // Incrementa o contador de vogais.
                contadorConsoantes--; // Decrementa o contador de consoantes, pois o caractere não deve ser contado como consoante.
            }
        }
    }

    printf("Numero de vogais: %d\n", contadorVogais); // Exibe o número de vogais contadas.
    printf("Numero de consoantes: %d\n", contadorConsoantes); // Exibe o número de consoantes contadas.

    return 0;
}
