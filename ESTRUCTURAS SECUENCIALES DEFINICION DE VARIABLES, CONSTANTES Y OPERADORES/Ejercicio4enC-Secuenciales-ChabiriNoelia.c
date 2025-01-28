
// Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio
#include <stdio.h>
int main ()
{
    int i, num, suma;
    float promedio;
    suma = 0;
    promedio = 0;

    // Leer 4 números
    for (i = 1; i <= 4; i++) {
        printf("Por favor ingrese el %iº número: ", i);
        scanf("%i", &num);
        suma = suma + num; // Sumar el número ingresado
    }

    // Calcular el promedio
    promedio = suma / 4.0;  // Cambiar 4 a 4.0 para obtener un resultado decimal

    // Imprimir la suma y el promedio
    printf("La suma de los números ingresados es: %i\n", suma);
    printf("El promedio de los números brindados es: %.2f\n", promedio); // Mostrar promedio con dos decimales

    return 0;
}