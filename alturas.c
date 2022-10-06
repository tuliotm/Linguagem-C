#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, i, nMenores;
    double mediaAlturas, soma, percentualMenores;

    printf("Quantas pessoas serao digitadas?: ");
    scanf("%d", &N);

    double alturas[N];
    int idades[N];
    char nomes[N][50];

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade : ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (i = 0; i < N; i++) {
        soma = soma + alturas[i];
    }

    mediaAlturas = soma / N;

    printf("\nAltura media: %.2lf\n", mediaAlturas);

    nMenores = 0;
    for (i = 0; i < N; i++) {
        if (idades[i] < 16) {
            nMenores = nMenores + 1;
        }
    }

    percentualMenores = (double) (nMenores * 100) / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);

    for (i = 0; i < N; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }


    return 0;
}
