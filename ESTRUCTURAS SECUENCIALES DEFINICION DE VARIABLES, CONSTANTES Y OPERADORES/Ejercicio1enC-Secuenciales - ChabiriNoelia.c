#include <stdio.h>

// Carga dos números enteros y muestra su suma y producto.
int main()
{
    int num1, num2, suma, producto;

    // Solicitar el primer número
    printf("Por favor ingrese el primer número: ");
    scanf("%i", &num1);

    // Solicitar el segundo número
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);

    // Calcular suma y producto
    suma = num1 + num2;
    producto = num1 * num2;

    // Mostrar resultados
    printf("La suma de ambos números es: %i\n", suma);
    printf("El producto de ambos números es: %i\n", producto);

    return 0;
}