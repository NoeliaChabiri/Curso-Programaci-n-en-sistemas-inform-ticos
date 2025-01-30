#include <stdio.h>

int main() {
    float a, b, c, a2, b2, c2, x, y;
    //x = (a'c - ac') / (a'b - ab')
    //y = (c - bx) / a

    // Solicitar coeficientes de la primera ecuación
    printf("Por favor ingrese los valores de los coeficientes de la primera función\n");
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);

    // Solicitar coeficientes de la segunda ecuación
    printf("Por favor ingrese los valores de los coeficientes de la segunda función\n");
    printf("Ingrese el valor de a: ");
    scanf("%f", &a2);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b2);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c2);

    // Calcular el valor de x
    if((a2 * b - a * b2) == 0) {
        printf("El valor de x es indeterminado\n");
    } else {
        x = (a2 * c - a * c2) / (a2 * b - a * b2);
        printf("El valor de x es %.2f\n", x);
    }

    // Calcular el valor de y
    if(a == 0) {
        printf("El valor de y es indeterminado\n");
    } else {
        y = (c - b * x) / a;
        printf("El valor de y es %.2f\n", y);
    }

    return 0;
}