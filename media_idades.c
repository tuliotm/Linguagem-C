#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma, qtd;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &x);

    soma = 0;
    qtd = 0;

    while (x >= 0) {
        soma = soma + x;
        qtd = qtd + 1;
        scanf("%d", &x);
    }

    if (qtd == 0) {
        printf("Impossivel Calcular");
    }
    else {
        media = (double) soma / qtd;

        printf("Media = %.2lf", media);

    }




    return 0;
}
