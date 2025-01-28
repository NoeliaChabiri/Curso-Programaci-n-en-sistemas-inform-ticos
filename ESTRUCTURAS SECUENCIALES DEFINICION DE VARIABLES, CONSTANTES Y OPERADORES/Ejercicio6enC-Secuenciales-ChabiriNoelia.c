#include <stdio.h>
#include <math.h>

// Programa para calcular las monedas necesarias para devolver la menor cantidad posible

int main() {
    int monedas50, monedas20, monedas10, monedas5; // Contadores para cada tipo de moneda
    float euros;  // Variable para almacenar la cantidad de euros a devolver

    // Inicializa los contadores a cero
    monedas50 = monedas20 = monedas10 = monedas5 = 0;

    // Pide al usuario que ingrese la cantidad de euros que se debe devolver
    printf("Por favor ingrese los euros que debe devolver para calcular las monedas necesarias: ");
    scanf("%f", &euros);  // Lee la cantidad de euros introducida por el usuario
    printf("Para devolver %.2f, hay que entregar: \n", euros);  // Imprime el monto a devolver

    // Calcula las monedas de 0.50€
    if (euros >= 0.5) {
        monedas50 = euros / 0.5;  // Calcula cuántas monedas de 0.50€
        euros = euros - (monedas50 * 0.5);  // Resta el valor de las monedas de 0.50€
    }

    // Calcula las monedas de 0.20€
    if (euros >= 0.2) {
        monedas20 = euros / 0.2;  // Calcula cuántas monedas de 0.20€
        euros = euros - (monedas20 * 0.2);  // Resta el valor de las monedas de 0.20€
    }

    // Calcula las monedas de 0.10€
    if (euros >= 0.1) {
        monedas10 = euros / 0.1;  // Calcula cuántas monedas de 0.10€
        euros = euros - (monedas10 * 0.1);  // Resta el valor de las monedas de 0.10€
    }

    // Calcula las monedas de 0.05€
    if (euros >= 0.05) {
        monedas5 = euros / 0.05;  // Calcula cuántas monedas de 0.05€
        euros = euros - (monedas5 * 0.05);  // Resta el valor de las monedas de 0.05€
    }

    // Imprime el resultado con la cantidad de monedas necesarias para cada tipo
    if (monedas50 > 0) {
        printf("%d monedas de 0.50€ \n", monedas50);
    }
    if (monedas20 > 0) {
        printf("%d monedas de 0.20€ \n", monedas20);
    }
    if (monedas10 > 0) {
        printf("%d monedas de 0.10€ \n", monedas10);
    }
    if (monedas5 > 0) {
        printf("%d monedas de 0.05€ \n", monedas5);
    }

    return 0;
}