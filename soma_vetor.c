#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, qtd;

    printf("Quantos numeros voce vai digitar?: ");
    scanf("%d", &N);

    double vet[N];
    double soma, media;

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    qtd = 0;
    printf("Valores = ");
    for (i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
         soma = soma + vet[i];
         qtd = qtd + 1;
    }

    media = (double) soma / qtd;

    printf("\nSoma = %.1lf\n", soma);
    printf("Media = %.2lf\n", media);







    return 0;
}
