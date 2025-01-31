#include <stdio.h>

int main() 
{
    int i, num, producto;  // Declaramos las variables: 'num' para el número ingresado, 'i' para el contador y 'producto' para el resultado de la multiplicación.

    printf("Ingrese un número: ");  
    scanf("%d", &num);  // Solicitamos al usuario un número para calcular su tabla de multiplicar.

    // Bucle que recorre los números del 1 al 9
    for (i = 1; i <= 9; i++)  
    {
        producto = i * num;  // Calculamos el producto

        // Imprimimos el resultado en formato de tabla de multiplicar
        printf("\n %d x %d = %d", num, i, producto);
    }

    return 0;  // Fin del programa
}