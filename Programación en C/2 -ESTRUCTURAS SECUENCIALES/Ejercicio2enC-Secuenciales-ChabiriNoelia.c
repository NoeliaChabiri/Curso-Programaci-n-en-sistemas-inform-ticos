#include <stdio.h>

// Calcula el perímetro de un cuadrado dado su lado.

int main(void)
{
    int lado, perimetro;  // Variables para el lado y el perímetro

    // Solicitar el valor del lado
    printf("Por favor ingrese la medida del lado del cuadrado: ");
    scanf("%i", &lado);

    // Calcular el perímetro
    perimetro = lado * 4;

    // Mostrar el resultado
    printf("El perímetro del cuadrado es: %i", perimetro);

    return 0;
}