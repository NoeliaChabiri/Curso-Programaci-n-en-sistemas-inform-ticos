#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arrayNombre[30][50], arraySexo[30], paso;
    int i = 0;
    float arraySueldo[30];
    char buffer[50]; // Para limpiar el buffer de entrada

    paso = 'Y'; // Inicialización correcta

    while (paso == 'Y' && i < 30) {

        // Leer nombre con espacios
        printf("\nIngrese el nombre del empleado: ");
        fgets(arrayNombre[i], 50, stdin);
        arrayNombre[i][strcspn(arrayNombre[i], "\n")] = '\0'; // Elimina '\n' final de fgets

        // Leer sueldo sin dejar basura en el buffer
        printf("\nIngrese el sueldo: ");
        fgets(buffer, sizeof(buffer), stdin);  // Leer la línea completa
        sscanf(buffer, "%f", &arraySueldo[i]); // Convertir a float

        // Leer sexo con validación
        do {
            printf("\nIngrese el sexo (F/M): ");
            fgets(buffer, sizeof(buffer), stdin); // Leer línea completa
            sscanf(buffer, " %c", &arraySexo[i]); // Extraer el primer carácter
            arraySexo[i] = toupper(arraySexo[i]);

            if (arraySexo[i] != 'F' && arraySexo[i] != 'M') {
                printf("\nIngrese correctamente el sexo (F: Femenino - M: Masculino) ");
            }
        } while (arraySexo[i] != 'F' && arraySexo[i] != 'M');

        i++; // Incrementar contador

        // Preguntar si desea continuar
        printf("\nDesea continuar cargando empleados? (Y/N): ");
        fgets(buffer, sizeof(buffer), stdin); // Leer línea completa
        sscanf(buffer, " %c", &paso);
        paso = toupper(paso);
    }

    // Mostrar datos ingresados
    printf("\nLista de empleados ingresados:\n");
    for (int j = 0; j < i; j++) {
        printf("%s | %.2f | %c\n", arrayNombre[j], arraySueldo[j], arraySexo[j]);
    }

    return 0;
}