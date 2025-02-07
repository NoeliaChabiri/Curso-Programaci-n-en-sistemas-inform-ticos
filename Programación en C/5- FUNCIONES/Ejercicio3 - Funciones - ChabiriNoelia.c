/// primer librerias , luego funciones, luego main.
/// no hace falta declarar variables si ya los pusimos en los parametros de la función, se declaran ahi.
/// iniciar las variables necesarias posterior a los paramatros.

///Un programador con poca experiencia nos manda la siguiente función que dice
///que intercambia el valor de sus dos parámetros.
///Si se llama como swap(x, y), al terminar la ejecución, las variables x e y han
///intercambiado sus valores. ¿Es eso cierto? Comprueba tu respuesta creando un
///programa en tu entorno de desarrollo y ejecutándolo. Puedes imprimir la variable
///entera x con la línea printf("%d\n", x);

#include <stdio.h>

// Función para intercambiar valores usando punteros , se necesitan punteros para poder devolver el valor
void intercambio(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main() {
    int a, b;
    
    // Pedir entrada al usuario
    printf("Ingrese dos enteros:\n");

    printf("Ingrese el 1º entero: ");
    while (scanf("%d", &a) != 1) {
        printf("Entrada inválida. Ingrese un número entero: ");
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }

    printf("Ingrese el 2º entero: ");
    while (scanf("%d", &b) != 1) {
        printf("Entrada inválida. Ingrese un número entero: ");
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }

    // Mostrar antes del intercambio
    printf("\nAntes del intercambio: a = %d, b = %d\n", a, b);

    // Llamada a la función con punteros
    intercambio(&a, &b);

    // Mostrar después del intercambio
    printf("Después del intercambio: a = %d, b = %d\n", a, b);

    return 0;
}