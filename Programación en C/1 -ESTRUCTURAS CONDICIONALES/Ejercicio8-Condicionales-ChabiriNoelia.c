#include <stdio.h>

int main() {
    int num1, num2, num3, aux;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    // Ordenar los números
    if (num1 > num2) {
        // Intercambiar num1 y num2 si num1 es mayor que num2
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if (num1 > num3) {
        // Intercambiar num1 y num3 si num1 es mayor que num3
        aux = num1;
        num1 = num3;
        num3 = aux;
    }

    if (num2 > num3) {
        // Intercambiar num2 y num3 si num2 es mayor que num3
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    // Imprimir los números ordenados
    printf("Los números ordenados de menor a mayor son: %d, %d, %d\n", num1, num2, num3);

    return 0;
}