#include <stdio.h>

int main() {
    char caracter;

    printf("Introduce un carácter: ");
    scanf("%c", &caracter);

    if (caracter >= 'A' && caracter <= 'Z' || caracter >= 'a' && caracter <= 'z') {
        printf("El carácter es alfabético.\n");
    } else if (caracter >= '0' && caracter <= '9') {
        printf("El carácter es numérico.\n");
    } else if (caracter == '.' || caracter == ',' || caracter == ';' || caracter == ':') {
        printf("El carácter es un signo de puntuación.\n");
    } else {
        printf("El carácter es desconocido.\n");
    }

    return 0;
}

