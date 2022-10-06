#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, qtd;

    printf("Qual a ordam da matriz?: ");
    scanf("%d", &N);

    int mat[N][N];

    for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("Elemento [%d,%d]: ", i, j);
                scanf("%d", &mat[i][j]);
            }
    }

    printf("\nDiagonal principal:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
    }

    qtd = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                qtd = qtd +1;
            }
        }
    }

    printf("\nQuantidade de negativos = %d", qtd);



    return 0;
}
