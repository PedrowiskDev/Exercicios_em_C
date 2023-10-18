#include <stdio.h>

int main()
{
    char palavra[10];

    printf("Digite um texto: ");
    scanf("%s", palavra);
                    
    for (int i = 10; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }
}