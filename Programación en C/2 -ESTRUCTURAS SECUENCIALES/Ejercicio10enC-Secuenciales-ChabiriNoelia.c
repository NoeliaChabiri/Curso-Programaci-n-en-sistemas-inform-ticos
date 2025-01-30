#include <stdio.h>

int main()
{
    float precio, descuento, iva, total, subtotal, descuentoTotal;
    int cantidad, codigo = 100000; // Inicializamos código con un valor válido

    while (codigo > 99999) // Se ejecuta hasta que el código sea válido (máx. 6 cifras)
    {
        printf("Por favor ingrese el código del producto (máximo 6 cifras): ");
        scanf("%d", &codigo);

        if (codigo > 999999) {
            printf("\nError: El código debe tener hasta 6 cifras.\n");
            codigo = 100000; // Reiniciar para que vuelva a pedirse
        }
        else {
            printf("\nPor favor ingrese el precio del artículo: ");
            scanf("%f", &precio);

            printf("\nPor favor ingrese la cantidad del artículo: ");
            scanf("%d", &cantidad);

            printf("\nPor favor ingrese el descuento a aplicar (en porcentaje): ");
            scanf("%f", &descuento);

            // Cálculo de totales
            subtotal = precio * cantidad;
            descuentoTotal = (subtotal * descuento) / 100;
            iva = (subtotal * 16) / 100;
            total = subtotal - descuentoTotal + iva; // Se descuenta antes de sumar el IVA

            // Imprimir la factura con el formato exacto solicitado
            printf("\n     ---- RAZA ----     \n");
            printf("%d           %.2f€\n", codigo, precio);
            printf("%d           %.2f€\n", cantidad, subtotal);
            printf("-%.0f%%        %.2f€\n", descuento, -descuentoTotal);
            printf("16%% IVA      %.2f€\n", iva);
            printf("TOTAL        %.2f€\n", total);
            printf("------------------------------\n\n");

            // Terminar el bucle al finalizar la factura
            break;
        }
    }

    return 0;
}