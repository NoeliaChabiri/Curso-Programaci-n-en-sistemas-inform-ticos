#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida para funciones como printf y scanf
#include <math.h>  // Incluye la biblioteca matemática para funciones como sqrt (raíz cuadrada)

int main() {
    float a, b, c, area, perimetro; // Declara variables para los lados, área y semiperímetro del triángulo

    printf("\nIngrese el primer lado del triangulo: "); // Pide al usuario el primer lado
    scanf("%f", &a); // Lee el primer lado y lo guarda en la variable 'a'
    printf("\nIngrese el segundo lado del triangulo: "); // Pide el segundo lado
    scanf("%f", &b); // Lee el segundo lado y lo guarda en 'b'
    printf("\nIngrese el tercero lado del triangulo: "); // Pide el tercer lado
    scanf("%f", &c); // Lee el tercer lado y lo guarda en 'c'

    if (a == b && c == b) { // Verifica si es equilátero (todos los lados iguales)
        printf("\nTriángulo equilátero\n");
    } else {
        if (a == b || a == c || b == c) { // Verifica si es isósceles (al menos dos lados iguales)
            printf("\nTriángulo isósceles\n");
        } else {
            printf("\nTriángulo escaleno\n"); // Si no es equilátero ni isósceles, es escaleno
        }
    }

    perimetro = (a + b + c) / 2; // Calcula el semiperímetro (la mitad del perímetro)

    // Calcula el área usando la fórmula de Herón
    area = sqrt(perimetro * (perimetro - a) * (perimetro - b) * (perimetro - c));

    printf("El área del triangulo es: %.2f", area); // Imprime el área con dos decimales

    return 0; // Indica que el programa terminó correctamente
}