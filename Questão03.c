#include <stdio.h>

int main() {
    int linhas, colunas;
    int primeiramatriz[linhas][colunas], segundamatriz[linhas][colunas];
    int opostas = 1;

    printf("Qual o tamanho da matriz (X X) ? ");
    scanf("%d %d", &linhas, &colunas);

    if (linhas <= 0 || colunas <= 0) {
        printf("Tamanho inválido de linhas ou colunas.\n");
        return 1;
    }

    printf("Quais os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &primeiramatriz[i][j]);

    printf("Quais os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &segundamatriz[i][j]);

    for (int i = 0; i < linhas && opostas; i++)
        for (int j = 0; j < colunas; j++)
            if (primeiramatriz[i][j] + segundamatriz[i][j] != 0)
                opostas = 0;

    if (opostas)
        printf("As matrizes são opostas.\n");
    else
        printf("As matrizes nao sao opostas.\n");

    return 0;
}