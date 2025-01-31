//Escribir un programa que simule el lanzamiento simultáneo de dos dados y
//finalice cuando ambos dados obtengan un 6 (no es necesario que sea de manera
//simultánea). Se tendrá que decir al finalizar el programa, en cuantos intentos se
//ha obtenido el 6 en ambos dados, o se dará por finalizado cuando en cualquiera
//de los dos dados se alcance el límite de 12 intentos. Se mostrará un mensaje cada
//vez que se realice una tirada, diciendo en que número de tirada estamos


#include <stdio.h>   // Librería estándar para entrada y salida
#include <ctype.h>   // Librería para funciones de manipulación de caracteres
#include <stdlib.h>  // Librería para generar números aleatorios (rand())

int main() {
    // Variables para contar intentos y almacenar los valores de los dados
    int intentos, dado1, dado2, i;
    char tirar;

    // Inicializamos los valores
    intentos = 0; // Contador de intentos
    dado1 = 0;    // Valor inicial del dado 1
    dado2 = 0;    // Valor inicial del dado 2

    // Bucle que se ejecuta hasta que se alcancen 12 intentos o la suma de los dados sea 6
    while (intentos <= 12 && (dado1 + dado2) != 6) {
        printf("\nPresione Y para tirar los dados: ");
        scanf(" %c", &tirar); // Se agrega un espacio antes de %c para evitar problemas con el buffer de entrada
        tirar = toupper(tirar); // Convierte la entrada a mayúscula para aceptar 'y' o 'Y'

        if (tirar == 'Y') { // Si el usuario presiona 'Y', se lanzan los dados
            dado1 = rand() % 6 + 1; // Genera un número entre 1 y 6 para el dado 1
            dado2 = rand() % 6 + 1; // Genera un número entre 1 y 6 para el dado 2

            // Muestra los resultados de los dados
            printf("\nDado 1: %d", dado1);
            printf("\nDado 2: %d", dado2);
            printf("\nLa suma de los dados es %d", (dado1 + dado2));

            // Incrementa el número de intentos
            intentos++;

            // Muestra cuántos intentos lleva y cuántos le quedan
            printf("\nYa ha tirado %d veces, le quedan %d intentos", intentos, (12 - intentos));
            i++; // Variable sin uso relevante, se puede eliminar
        }
        
        tirar = 'n'; // Se reinicia la variable tirar para evitar repeticiones no deseadas
    }

    printf("\n");

    // Verifica si se obtuvo la suma de 6 antes de llegar al límite de intentos
    if (dado1 + dado2 == 6) {
        printf("\nMuy bien, ha sacado 6 con la suma de sus dados. Lo logró en %d tiradas.", intentos);
    } else {
        printf("\nHa fallado, lo siento. Ya tiró 12 veces y no logró obtener la suma de 6.");
    }

    return 0;
}