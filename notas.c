#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaFinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    printf("Nota final = %.1lf", notaFinal);

    if (notaFinal < 60) {
        printf("\nReprovado");
    }
}
