#include <stdio.h>

int main() {
    float pCola, pNaranja, pLima; // Precios de los productos
    float totalCola, totalLima, totalNaranja, totalVentas; // Total de ventas por producto
    int colaCant, limaCant, naranjaCant; // Cantidades vendidas de cada producto
    int i; // Variable para iterar sobre los productos

    totalCola = totalLima = totalNaranja = 0.0; // Inicializar totales

    for (i = 1; i <= 3; i++) {
        if (i == 1) {
            // Ventas de Coca-Cola
            printf("Por favor ingrese la cantidad vendida de Coca Cola (max 5000000): ");
            scanf("%d", &colaCant);

            if (colaCant <= 5000000) {
                printf("Por favor ingrese el precio de Coca Cola: ");
                scanf("%f", &pCola);
                totalCola = pCola * colaCant; // Calcular total de ventas de Coca Cola
            } else {
                printf("La cantidad debe ser menor o igual a 5000000. Intente nuevamente.\n");
                i--; // Decrementar para repetir el ciclo
                continue;
            }
        } else if (i == 2) {
            // Ventas de Limón
            printf("Por favor ingrese la cantidad vendida de Limón (max 500000): ");
            scanf("%d", &limaCant);

            if (limaCant <= 5000000) {
                printf("Por favor ingrese el precio de Limón: ");
                scanf("%f", &pLima);
                totalLima = pLima * limaCant; // Calcular total de ventas de Limón
            } else {
                printf("La cantidad debe ser menor o igual a 5000000. Intente nuevamente.\n");
                i--; // Decrementar para repetir el ciclo
                continue;
            }
        } else {
            // Ventas de Naranja
            printf("Por favor ingrese la cantidad vendida de Naranja (max 5000000): ");
            scanf("%d", &naranjaCant);

            if (naranjaCant <= 5000000) {
                printf("Por favor ingrese el precio de Naranja: ");
                scanf("%f", &pNaranja);
                totalNaranja = pNaranja * naranjaCant; // Calcular total de ventas de Naranja
            } else {
                printf("La cantidad debe ser menor o igual a 5000000. Intente nuevamente.\n");
                i--; // Decrementar para repetir el ciclo
                continue;
            }
        }
    }

    // Mostrar los datos con el formato exacto de la imagen
    printf("\n%-10s %-10s %-10s %-10s\n", "Producto", "Ventas", "Precio", "Total");
    printf("------------------------------------------\n");
    printf("%-10s %-10d %-10.2f %-10.2f\n", "Cola", colaCant, pCola, totalCola);
    printf("%-10s %-10d %-10.2f %-10.2f\n", "Naranja", naranjaCant, pNaranja, totalNaranja);
    printf("%-10s %-10d %-10.2f %-10.2f\n", "Limón", limaCant, pLima, totalLima);
    totalVentas=totalLima+totalNaranja+totalCola;
    printf("\n%-31s %-10.2f\n", "TOTAL", totalVentas);

    return 0;
}

