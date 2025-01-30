
//Escribir un programa en C que pida una letra y detecte si es una vocal

#include <stdio.h>


int main() {
    char caracter;

    printf("Ingrese un carácter: ");
    scanf(" %c", &caracter);

    // Verificamos si el carácter es una vocal minúscula
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        printf("El carácter '%c' es una vocal.\n", caracter);
    } else if (caracter >= 'a' && caracter <= 'z') {
        printf("El carácter '%c' es una consonante.\n", caracter);
    } else if (caracter >= '0' && caracter <= '9') {
        printf("El carácter '%c' es un número.\n", caracter);
    } else {
        printf("El carácter '%c' es un símbolo o carácter especial.\n", caracter);
    }

    return 0;
}