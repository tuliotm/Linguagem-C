#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, delta, X1, X2;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = (pow(b, 2.0) - 4*a*c);

    if (delta < 0 || a == 0) {
        printf("Essa equacao nao possui raizes reais\n");
    }
    else {
        X1 = (-b + sqrt(delta))/(2*a);
        X2 = (-b - sqrt(delta))/(2*a);

        printf("X1 = %.4lf\n", X1);
        printf("X2 = %.4lf", X2);
    }



    return 0;
}
