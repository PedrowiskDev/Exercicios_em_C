#include <stdio.h>

void marcarAgua(int N, int M, char parede[N][M])
{
    for (int i = 1; i < N; i += 2)
    {
        for (int j = 0; j < M; j++)
        {
            if (parede[i - 1][j] == 'o' || (j > 0 && parede[i][j - 1] == 'o' && parede[i + 1][j - 1] == '#') || (j < M - 1 && parede[i][j + 1] == 'o' && parede[i + 1][j + 1] == '#'))
            {
                parede[i][j] = 'o';
            }
        }
    }
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    char parede[N][M + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", parede[i]);
    }

    marcarAgua(N, M, parede);

    for (int i = 0; i < N; i++)
    {
        printf("%s\n", parede[i]);
    }

    return 0;
}