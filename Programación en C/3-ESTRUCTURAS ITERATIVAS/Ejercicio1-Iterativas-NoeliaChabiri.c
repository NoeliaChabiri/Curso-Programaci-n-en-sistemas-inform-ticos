#include <stdio.h>

int main() {
    int promedioPares, contadorImpares, contadorPares, i;  // Declaración de variables
    float promedioImpares; // Se usa float para el promedio de impares para mayor precisión

    i++; // Esta línea no es necesaria y puede eliminarse

    contadorImpares = 0;  // Inicializa el contador de números impares
    contadorPares = 0;  // Inicializa el contador de números pares
    promedioPares = 0;  // Inicializa la suma de los números pares
    promedioImpares = 0;  // Inicializa la suma de los números impares

    while (i <= 200) {  // Bucle que itera desde 1 hasta 200
        if (i % 2 == 0) {  // Si el número es par
            promedioPares += i;  // Suma el número par al acumulador
            contadorPares++;  // Incrementa el contador de pares
        } else {  // Si el número es impar
            promedioImpares += i;  // Suma el número impar al acumulador
            contadorImpares++;  // Incrementa el contador de impares
        }
        i++;  // Incrementa el contador del bucle
    }

    // Calcula los promedios dividiendo la suma entre la cantidad de números
    promedioImpares = promedioImpares / contadorImpares;
    promedioPares = promedioPares / contadorPares;

    // Imprime los resultados con dos decimales para el promedio de impares
    printf("\nEl promedio de los impares es: %.2f", promedioImpares);
    printf("\nEl promedio de los pares es: %d", promedioPares);

    return 0;
}