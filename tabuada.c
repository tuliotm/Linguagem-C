#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, resultado;

    printf("Deseja a tabuada para qual valor?: ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        resultado = N * i;
        printf("%d * %d = %d\n", N, i, resultado);
    }


    return 0;
}
