#include <stdio.h>

// Programa que ingresa cuatro números, calcula la suma de los dos primeros y el producto de los dos últimos.

int main()
{
    int num, producto, suma, i;
    suma = 0;       // Inicializar suma en 0
    producto = 1;   // Inicializar producto en 1

    // Bucle para ingresar 4 números
    for (i = 1; i < 5; i++)
    {
        printf("Por favor ingrese el %iº: ", i);
        scanf("%i", &num);

        // Sumar los dos primeros números
        if (i < 3)
        {
            suma = suma + num;
        }

        // Calcular el producto de los dos últimos números
        if (i >= 3)
        {
            producto = num * producto;
        }
    }

    // Imprimir resultados
    printf("La suma del primer y segundo número es: %d\n", suma);
    printf("El producto del tercer y cuarto número es: %d\n", producto);

    return 0;
}