#include <stdio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("Por favor ingrese el primer número");
    scanf("%i",&num1);
    printf("Ingrese el segundo número");
    scanf("%i",&num2);
    producto=num1*num2;
    suma=num1+num2;
    printf("La suma de ambos números es: %i",suma);
    printf("El producto de ambos números es: %i",producto);

    return 0;
}


