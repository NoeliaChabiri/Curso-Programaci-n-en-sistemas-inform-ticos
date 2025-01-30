#include <stdio.h> // Se incluye la biblioteca estándar de entrada/salida para usar printf y scanf

int main() {
    int num; // Se declara la variable num para guardar el número del usuario

    printf("\nIngrese un número del 1 al 7: "); // Se pide al usuario que ingrese un número del 1 al 7
    scanf("%d", &num); // Se lee el número del usuario y se guarda en la variable num

    switch (num) { // Se usa la estructura switch para evaluar el valor de num
        case 1: // Si num es 1
            printf("\nEse número corresponde al día Lunes"); // Se imprime el mensaje correspondiente
            break; // Se sale del switch
        case 2: // Si num es 2
            printf("\nEse número corresponde al día Martes"); // Se imprime el mensaje correspondiente
            break; // Se sale del switch
        case 3: // Si num es 3
            printf("\nEse número corresponde al día Miercoles"); // Se imprime el mensaje correspondiente
            break; // Se sale del switch
        case 4: // Si num es 4
            printf("\nEse número corresponde al día Jueves"); // Se imprime el mensaje correspondiente
            break; // Se sale del switch
        case 5: // Si num es 5
            printf("\nEse número corresponde al día Viernes"); // Se imprime el mensaje correspondiente
            break; // Se sale del switch
        case 6: // Si num es 6
            printf("\nEse número corresponde al día Sabado"); // Se imprime el mensaje correspondiente
            break; // Se sale del switch
        case 7: // Si num es 7
            printf("\nEse número corresponde al día Domingo"); // Se imprime el mensaje correspondiente
            break; // Se sale del switch
        default: // Si num no está entre 1 y 7
            printf("\nNúmero no válido. Debe ser del 1 al 7."); // Se imprime un mensaje de error
            break; // Se sale del switch
    }

    return 0; // Se indica que el programa terminó correctamente
}